#include <iostream>
#define ll long long
 
using namespace std;

class BankAccount
{
private:
    string customerName = "", type = "";
    ll accountNumber = 0;
    double accountBalance = 0;


public:
    void customerDetails(string customerName, ll accountNumber) {
        this->customerName = customerName;
        this->accountNumber = accountNumber;
    }
    void accountType(string accountType) {
        if (accountType == "Current" || accountType == "Saving")
            this->type = accountType;
    }
    double balance() {
        return accountBalance;
    }
    void deposit(double amount) {
        accountBalance += amount;
    }
    double withdraw(double amount) {
        if (accountBalance <= 0  || amount > accountBalance)
        {
            // cout << "Invalid Amount" << endl;
            return -1;
        }
        accountBalance -= amount;
        return amount;
    }
    void display() {
        cout << "Customer Name: " << customerName << endl;
        cout << "AccountNumber: " << accountNumber << endl;
        cout << "Account Type: " << type << endl;
        cout << "Account Balance: " << accountBalance << endl;
    }
};



int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    BankAccount account = BankAccount();
    account.customerDetails("Shakib", 210041118);
    account.accountType("Saving");
    cout << "Initial balance " << account.balance() << endl;
    account.deposit(50000);
    cout << "After Deposit Balance " << account.balance() << endl;
    account.withdraw(5000);
    cout << "Afer withdraw Balance " << account.balance() << endl;
    cout << endl;
    account.display();
    
    return 0;
}