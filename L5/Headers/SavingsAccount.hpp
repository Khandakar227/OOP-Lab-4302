#include<iostream>
using namespace std;

class SavingsAccount
{
private:
    static double annualInterestRate;
    static int countAccounts;
    double savingsBalance;
public:
    SavingsAccount(double balance);
    double calculateMonthlyInterest();
    double getSavingsBalance();
    static void modifyInterestRate(double _aIr);
    static int getCountAccounts();
    ~SavingsAccount();
};  
