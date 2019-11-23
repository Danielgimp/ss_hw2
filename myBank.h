#ifndef _MYBANK_H_
#define _MYBANK_H_


double bankMatrix[2][50]; //balance for each account and close or open

int O (double amount);
double B (int account_number);
double D (int account_number, double amount);
void C (int account_number);
double W (int account_number, double amount);
double I (double interest_rate);
double P ();
void E ();

#endif