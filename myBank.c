#include "myBank.h"
#include <stdio.h>
int AccountsNum=0;
int accountId=900;
//int accountId=900;


int O (double amount) //open account and save initial deposit(iff acc# is smaller <=50) .print new account number.-works --no bug checks 
{
if(AccountsNum<50 && amount>0)
{
bankMatrix[0][AccountsNum]=amount; //setup account with the given amount
bankMatrix[1][AccountsNum]=accountId+1; //give an account id
accountId++; //uplift the account id
AccountsNum++; //uplift the total account num
return accountId;
}
else return printf("There are alreay 50 accounts! OR there is a wrong input \n");

}

double B (int account_number) // take account number and return the balance (iff the acount is open) - works 
{
double balance;
if((account_number-901)>AccountsNum || account_number-901<0 ) //if the given account is bigger than number of accounts theres nothing to do
{
    printf("There is no such account \n");

}
else
{
     //create balance var
    balance=bankMatrix[0][account_number-901]; //and just return what amount it has
    

}
return balance;
}

double D (int account_number, double amount) // money deposit (iff the account is open), than print the new balance. -works --no bug checks
{
if((account_number-901)<=AccountsNum || account_number-901<=0 || account_number-901>49) //if the given account is bigger than number of accounts theres nothing to do (or smaller than 901)
{
    printf("There is no such account \n");
    

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
return printf(" ");
}

double W (int account_number, double amount) //withdraw from account (iff the account is open && account balance is>=num) -works --no bug checks 
{
if((account_number-901)<=AccountsNum || account_number-901<=0 || account_number-901>49 ) //if the given account is bigger than number of accounts theres nothing to do (or smaller than 901)
{
    printf("There is no such account or there are no funds on the account,Try again! \n");

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
                printf("There is not enough Balance in the account! \n");

            }
            
        }

    }
}
return printf(" ");
}

void C (int account_number) //close account (iff the account is open) -works
{
    
    if((account_number-901)>AccountsNum || account_number-901<0 ) //if the given account is bigger than number of accounts theres nothing to do (or smaller than 901)
    {
    printf("There is no such account \n");
    }
    else
    {
        bankMatrix[0][account_number-901]=0; //just go to the account# and set it to 0
        printf("The Account: %d Is Closed \n",account_number);
    }
     accountId--;
     AccountsNum--;
       
}

double I (double interest_rate) // intrest rate to all open accounts -works
{
double balance; //create balance var
        if(interest_rate>0)
        {
        for (int i=0;i<AccountsNum;i++) //iterate through all accounts
        {
        balance=bankMatrix[0][i]; //get each account balance
        bankMatrix[0][i]=balance*(interest_rate/100)+balance;
        if(balance>0)printf("The Current Amount in account %d is: %0.2lf \n",i+901,bankMatrix[0][i]); //and print it
        }
        }
        else printf("The Interest rate has to be a positive number!");
    return printf(" ");
}

double P () //print all open accounts and their balance -works 
{
    double balance; //create balance var
        for (int i=0;i<AccountsNum;i++) //iterate through all accounts
        {
        balance=bankMatrix[0][i]; //get each account balance
        if(balance>0)printf("The Current Ammount in account %d is: %f \n",i+901,balance); //and print it
        }
        return printf(" ");
    
}

void E () //close all account and exit program -works 
{
    
        for (int i=0;i<sizeof(bankMatrix[1]);i++) //iterate through all accounts
        {
        bankMatrix[0][i]=0; //get each account balance
        bankMatrix[1][i]=0;
        accountId--; 
        AccountsNum--;
        }

    
    
}