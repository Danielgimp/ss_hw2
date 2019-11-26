#include <stdio.h>
#include "myBank.h"

    int main() {
        char func;
        int account_number;
        double interest_rate=0;
        double amount=0;
        

        while (func!=-1) //No Such Ascii Value --> means infinite loop
        {

        printf("Transaction type?:  \n");
        scanf(" %c",&func);
        

                switch ((int)func) 
                {
                case 79: 
                printf("Initial deposit?: \n");
                scanf(" %lf",&amount);
                printf("The New Account No is: %d \n",O(amount));
                break;

                case 66:
                printf("Account Number?: \n");
                scanf(" %d",&account_number);
                if(B(account_number)>0) printf("The Balance On The Account is: %0.2lf \n",B(account_number));
                else printf("The account %d is closed and/or was never opened \n",account_number);
                break;

                case 68:
                printf("Account number?: \n");
                scanf(" %d",&account_number);
                printf("Amount?: \n");
                scanf(" %lf",&amount);
                printf("The New Amount is: %0.2lf \n",D(account_number,amount)); 
                break;

                case 87:
                printf("Account number?: \n");
                scanf(" %d",&account_number);
                printf("Amount?: \n");
                scanf(" %lf",&amount);
                if(W(account_number,amount)>=0) printf("The New Amount is: %0.2lf \n",W(account_number,amount));
                else printf("\n");
                break;

                case 67:
                printf("Account number?: \n");
                scanf(" %d",&account_number);
                C(account_number);
                break;

                case 73:
                printf("Input Interst Rate: \n");
                scanf(" %lf",&interest_rate);
                I(interest_rate);
                break;

                case 80:
                
                P();
                break;

                case 69:
                 E();
                 printf("All Accounts are closed, Program is finished running.");
                 return 0;
                                                              
                default:
                printf("Error! Input is incorrect \n");
                break;
                }
                
        }
        return 0;
        
    }
    