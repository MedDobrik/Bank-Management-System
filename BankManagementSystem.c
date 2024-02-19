#include <stdio.h>
#include <string.h>

void createAccount(char *name, char *pass)
{
    printf("\n\nCreating You New Account...\n\n");
    printf("Enter Your Username : ");
    scanf("%s", &*name);
    getchar();
    printf("\nEnter Your Password : ");
    scanf("%s", &*pass);


    printf("\nYour Account Has Been Created Successfully.\n\n");
}

int Login(int accountBalance)
{
    // Check Amount
    // Withdraw
    // Diposit
    // quit

    int opp;
    int run = 1;

    while (run == 1)
    {
        printf("\n1 - Check Account Balance\n2 - Withdrawal\n3 - Deposit\n4 - Quit");
        printf("\nChose a Number :");
        
        scanf("%d", &opp);

        if (opp == 1)
        {
            printf("\nYou Current account Balance is : %d\n", accountBalance);
        }
        else if (opp == 2)
        {
            int withdraw;
            printf("\nChose the Amount You Wanna Withdraw : ");
            scanf("%d", &withdraw);
            accountBalance -=  withdraw;

            printf("\nYou Have Withdrawal %d Successfully.", withdraw);
            printf("\nou current new Account Balance Is %d", accountBalance);

        }
        else if (opp == 3)
        {
            int deposit;
            printf("\nChose the Amount You Wanna Deposit : ");
            scanf("%d", &deposit);
            accountBalance += deposit;

            printf("\nYou Have Deposit %d Successfully.", deposit);
            printf("\nYou current new Account Balance Is %d", accountBalance);
        }
        else if (opp == 4)
        {
            return accountBalance;
            run = 0;
        }
        else 
        {
            printf("Please Chose Between 1 and 4");
        }
    }
    

}

void main() {

    /*The banking sector occupies a large part of the tertiary sector because which data maintained is too much by a single application. Using C language we can create an application that can manage the data of the Bank,  we use basic knowledge of C like string, array, structures, etc.

    The functionality of the Bank Management System Application is mentioned below:

    1 - Transfer Money to the Account
    2 - Creation of Account
    3 - Check Amount
    4 - Login Functionality
    */

    // overAll variables
    int run = 1;
    int opp;
    int accountBalance = 1000;

    //Create Account 
    char username[64];
    char password[64];

    //Login
    


    printf("Welcome To Our Bank. \n\n");

    while (run == 1)
    {

        int checkopp = 1;

        printf("\n\n1 - Create an Account.\n2 - Login To Your Account\n3 - Quit.");

        while (checkopp == 1)
        {
            printf("\n\nChose a Number : ");
            scanf("%d", &opp);

            if (opp > 0 && opp < 4)
            {
                checkopp = 0;
            }
        }

        if (opp == 1)
        {
            createAccount(username, password);
        }

        else if (opp == 2)
        {
            char LoginUsername[64], LoginPassword[64];

            printf("\nEnter Your Username : ");
            scanf("%s", LoginUsername);
            getchar();
            printf("Enter Your Password : ");
            scanf("%s", LoginPassword);
            
            if (strcmp(LoginUsername, username) == 0 && strcmp(LoginPassword, password) == 0)
            {
                int returnBalance = Login(accountBalance);
                accountBalance = returnBalance;
            }
            else {printf("\nEither the username or password is wrong, or you need to create an account first.\n");}
        }

        else if (opp == 3)
        {
            run = 0;
        }

        else 
        {
            printf("\nChose between 1 and 3\n");
        }
        

    }

}