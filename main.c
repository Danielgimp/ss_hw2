#include <stdio.h>
#include "myBank.h"

    double main() {
        char func;
        int account_number;
        double interest_rate=0;
        double amount=0;

        while (func!=-1) //69==E
        {

        printf("Transaction type?:  \n");
        scanf(" %c",&func);
        

                switch ((int)func) 
                {
                case 79: 
                printf("Initial deposit?: \n");
                scanf(" %lf\n",&amount);
                printf("The New Account No is: %d \n",O(amount));
                break;

                case 66:
                printf("Account Number?: \n");
                scanf(" %d\n",&account_number);
                printf("The Balance On The Account is: %lf \n",B(account_number));
                break;

                case 68:
                printf("Account number?: \n");
                scanf(" %d",&account_number);
                printf("Amount?: \n");
                scanf(" %lf",&amount);
                printf("The New Amount is: %lf",D(account_number,amount)); 
                break;

                case 87:
                printf("Account number?: \n");
                scanf(" %d",&account_number);
                printf("Amount?: \n");
                scanf(" %lf",&amount);
                printf("The New Amount is: %lf",W(account_number,amount));
                break;

                case 67:
                printf("Account number?: \n");
                scanf(" %d\n",&account_number);
                C(account_number);
                break;

                case 73:
                scanf("Interest rate?: %lf \n",&interest_rate);
                I(interest_rate);
                break;

                case 80:
                
                P();
                break;

                case 69:
               
                E();
                return 0;
                break;
               
                default:
                printf("Error! Input is incorrect \n");
                break;
                }
                
        }
    }
    