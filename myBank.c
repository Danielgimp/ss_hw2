#include "myBank.h"
int AccountsNum=0;
int accountId=900;


double O (double amount) //open account and save initial deposit(iff acc# is smaller <=50) .print new account number. 
{
if(AccountsNum<50)
{
bankMatrix[0][AccountsNum]=amount; //setup account with the given amount
bankMatrix[1][AccountsNum]=accountId+1; //give an account id
accountId++; //uplift the account id
AccountsNum++; //uplift the total account num
return accountId;
}
else printf("There are alreay 50 accounts!");
}



double B (double account_number) // take account number and return the balance (iff the acount is open)
{
if((account_number-901)>AccountsNum || account_number-901<0 ) //if the given account is bigger than number of accounts theres nothing to do
{
    printf("There is no such account");

}
else
{
    double balance; //create balance var
    balance=bankMatrix[0][account_number-901]; //and just return what amount it has

}
return balance;
}

double D (double account_number, double amount) // money deposit (iff the account is open), than print the new balance.
{
if((account_number-901)>AccountsNum || account_number-901<0 ) //if the given account is bigger than number of accounts theres nothing to do (or smaller than 901)
{
    printf("There is no such account");

}
else
{
    for (int i=0;i<sizeof(bankMatrix[1]);i++) //search in the for loop for the account
    {
        if(bankMatrix[1][i]==account_number) //if you found the account (and it should!)
        {
            bankMatrix[0][i]+=amount; //top up the account with the given amount 
            return bankMatrix[0][i]; //returns the new amount
        }

    }
}
}

double W (double account_number, double amount) //withdraw from account (iff the account is open && account balance is>=num)
{
if((account_number-901)>AccountsNum || account_number-901<0 ) //if the given account is bigger than number of accounts theres nothing to do (or smaller than 901)
{
    printf("There is no such account");

}
else
{
    for (int i=0;i<sizeof(bankMatrix[1]);i++) //search in the for loop for the account
    {
        if(bankMatrix[1][i]==account_number) //if you found the account (and it should!)
        {
            if(bankMatrix[0][i]-=amount>=0)
            {
                bankMatrix[0][i]-=amount; //top up the account with the given amount 
                return bankMatrix[0][i];
            }
            if(bankMatrix[0][i]-=amount<0)
            {
                printf("There is not enough Balance in the account!");

            }
            
        }

    }
}
}

double C (double account_number) //close account (iff the account is open)
{
    if((account_number-901)>AccountsNum || account_number-901<0 ) //if the given account is bigger than number of accounts theres nothing to do (or smaller than 901)
    {
    printf("There is no such account");
    }
    else
    {
        bankMatrix[0][account_number]==0; //just go to the amount section and set it to 0
        bankMatrix[1][account_number]==0; //just go to the account# and set it to 0
    }
       
}

double I (double interest_rate) // intrest rate to all open accounts
{

    
}

double P () //print all open accounts and their balance
{
    double balance; //create balance var
        for (int i=0;i<sizeof(bankMatrix[1]);i++) //iterate through all accounts
        {
        balance=bankMatrix[0][i]; //get each account balance
        printf("The Current Ammount in account %d is: %f",i+900,balance); //and print it
        }
    
}

void E () //close all account and exit program
{
    
        for (int i=0;i<sizeof(bankMatrix[1]);i++) //iterate through all accounts
        {
        bankMatrix[0][i]=0; //get each account balance
        bankMatrix[1][i]=0;
        }
    
    
}