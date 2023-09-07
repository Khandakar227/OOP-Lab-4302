#include "../Headers/Employee.hpp"

string Employee::getName() { return name; }
DOB Employee::getDOB() { return dob; }
int Employee::getSalaries() { return salaries; }

void Employee::setName(string _n)
{
    if (_n.size() < 3)
        name = "John Doe";
    else
        name = _n;
}
void Employee::setDOB(DOB _dob)
{
    if (2023 - _dob.year < 18)
        dob = {1, 1, 2002};
    else
        dob = _dob;
}
void Employee::setSalaries(int _s)
{
    if (_s < 10000 || _s > 100000)
        salaries = 10000;
    else
        salaries = _s;
}
void Employee::getInfo()
{
    cout << "Name: " << name << endl;
    cout << "Date of Birth: " << dob.day << "-" << dob.month << "-" << dob.year << endl;
    cout << "Salary: " << salaries << endl;
}
void Employee::setInfo(string _name, DOB _dob, int _s) {
    setName(_name);
    setDOB(_dob);
    setSalaries(_s);
}