#include<iostream>
using namespace std;

typedef struct __DateOfBirth {
    int day;
    int month;
    int year;
} DOB;

class Employee
{
private:
    string name;
    DOB dob;
    int salaries;
public:
    string getName();
    DOB getDOB();
    int getSalaries();

    void setName(string);
    void setDOB(DOB);
    void setSalaries(int);

    void setInfo(string, DOB, int);
    void getInfo();
};
