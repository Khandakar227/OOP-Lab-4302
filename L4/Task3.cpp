#include <iostream>
#define ll long long
 
using namespace std;

class BankAccount
{
private:
    int accNumber;
    float balance, minBalance;
    string holderName, type;
public:
    BankAccount(int _accNumber, float _balance, float _minBalance, string _holderName, string _type);
    void displayInfo();
    void showBalance();
    void deposit(int amount);
    void withdrawal(int amount);
    void giveInterst(float interest);
    ~BankAccount();
};

BankAccount::BankAccount(int _accNumber, float _balance, float _minBalance, string _holderName, string _type)
{
    accNumber = _accNumber;
    balance = _balance;
    minBalance = _minBalance;
    holderName = _holderName;
    type = _type;
}
void BankAccount::displayInfo()
{
    cout << "Account Number: " << accNumber <<endl;
    cout << "Balance: " << balance <<endl;
    cout << "Min Balance: " << minBalance <<endl;
    cout << "Holder Name: " << holderName <<endl;
    cout << "Account Type: " << type <<endl;
}
void BankAccount::showBalance()
{
    cout << "Current Balance: " << balance <<endl;
}
void BankAccount::deposit(int amount)
{
    if (amount <= 0) 
    {
        cout << "Invalid Amount" <<endl;
        return;
    }
    balance += amount;
}
void BankAccount::withdrawal(int amount)
{
    if (amount < 0 || balance <= minBalance || amount > balance)
        cout << "Invalid Amount or insufficient Balance" <<endl;
    else
    balance -= amount;
}
void BankAccount::giveInterst(float interest = 3)
{
    if (interest < 0) {
        cout << "Error: invalid interest" <<endl;
        return;
    }
    float interestAmount = balance * interest/100;
    balance += interestAmount;
    balance -= interestAmount/10;
}
BankAccount::~BankAccount()
{
    cout << "Account of " << holderName << " with account no " << accNumber << " is destroyed with a balance BDT " << balance << endl;
}


int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    BankAccount ba(21004118, 5000, 5000, "Shakib", "Savings");
    ba.displayInfo();
    ba.deposit(5000);
    ba.showBalance();
    ba.withdrawal(5000);
    ba.showBalance();
    ba.withdrawal(6000);
    ba.giveInterst();
    ba.showBalance();
    
    return 0;
}