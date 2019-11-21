#ifndef _MYBANK_H_
#define _MYBANK_H_
#define AccNum=50;

double bankMatrix[2][50]; //balance for each account and close or open

double O (double amount);
double B (double account_number);
double D (double account_number, double amount)
double W (double account_number, double amount);
double C (double account_number);
double I (double interest_rate);
double P ();
double E ();

#endif