#include <stdio.h>
double main()
{

char func;
int account_number;
double amount;
double interest_rate;

while (func !='E')
{

printf("Transaction type?: ");
scanf("%c",func);

    switch (func)
​{
    case 'O':
    scanf("Initial deposit?: %f",amount);
    double O (amount);
    break;

    case 'B':
    scanf("Account number?: %f",account_number);
    double B (account_number);
    break;

    case 'D':
    scanf("Account number?: %f",account_number);
    scanf("Amount?:  %f",amount);
    double D (account_number,amount); // put there 2 numbers.
    break;

    case 'W':
    scanf("Account number?: %f",account_number);
    scanf("Amount?:  %f",amount);
    double W (account_number,amount); // put there 2 numbers.
    break;

    case 'C':
    scanf("Account number?: %f",account_number);
    double C (account_number);
    break;

    case 'I':
    scanf("Interest rate?: %f",interest_rate);
    double I (account_number);
    break;

    case 'I'
    double P ();
    break;

    case 'E'
    void E ();
    break;

    default:
            printf("Error! Input is incorrect");

}


}
}