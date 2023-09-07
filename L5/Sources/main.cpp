#include <iostream>
#include"../Headers/SavingsAccount.hpp"
#include"../Headers/StudentInfo.hpp"
#include"../Headers/Employee.hpp"

using namespace std;

int main(int, char**){
    cout << endl;
    cout << "Task 1---------------------------------------" <<endl;
    SavingsAccount saver1(2000.00);    
    SavingsAccount saver2(3000.00);
    cout << "Number of accounts: " << SavingsAccount::getCountAccounts() <<endl;
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    cout << "Saver 1 balance with interest $" << saver1.getSavingsBalance() << endl;
    cout << "Saver 2 balance with interest $" << saver2.getSavingsBalance() << endl;

    SavingsAccount::modifyInterestRate(4);
    
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    cout << "Saver 1 balance with new interest $" << saver1.getSavingsBalance() << endl;
    cout << "Saver 2 balance with new interest $" << saver2.getSavingsBalance() << endl;
    cout << endl;
    cout << endl;
    
    cout << "Task 2---------------------------------------" <<endl;
    StudentInfo stdnt;
    stdnt.setInfo("118", "Shakib", {26, 12, 2002}, 3.86);
    stdnt.getInfo();
    cout << endl;
    cout << endl;
    
    cout << "Task 3---------------------------------------" <<endl;
    cout << "Age: " << stdnt.getAge() << " years old" << endl;
    cout << endl;
    cout << endl;
    
    cout << "Task 4---------------------------------------" <<endl;
    Employee emp1, emp2;
    emp1.setInfo("Shakib", {26,2,2002}, 12000);
    emp1.getInfo();
    emp2.setInfo("Jh", {1, 10, 2012}, 5000000);
    emp2.getInfo();
}
