#include"../Headers/SavingsAccount.hpp"
using namespace std;

SavingsAccount::SavingsAccount(double balance = 0)
{
    savingsBalance = balance;
    countAccounts++;
}
double SavingsAccount::calculateMonthlyInterest()
{
    double interest = savingsBalance * annualInterestRate/12;
    savingsBalance += interest;
    return interest;
}
SavingsAccount::~SavingsAccount()
{
    countAccounts--;
}
void SavingsAccount::modifyInterestRate(double _aIr)
{
    annualInterestRate = _aIr;
}
double SavingsAccount::getSavingsBalance()
{
    return savingsBalance;
}
int SavingsAccount::getCountAccounts() {return countAccounts;}
double SavingsAccount::annualInterestRate = 3;
int SavingsAccount::countAccounts = 0;