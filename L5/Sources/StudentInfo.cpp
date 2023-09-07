#include"../Headers/StudentInfo.hpp"
using namespace std;

string StudentInfo::getID() { return id; }
double StudentInfo::getCGPA() { return cgpa; }
string StudentInfo::getName() { return name; }
DateOfBirth StudentInfo::getDOB() { return dateOfBirth; }
int StudentInfo::getAge() const { return 2023 - dateOfBirth.year; }
void StudentInfo::getInfo() {
    cout << "ID: " << id <<endl;
    cout << "Name: " << name <<endl;
    cout << "Date of birth: " << dateOfBirth.day << "-" << dateOfBirth.month << "-" << dateOfBirth.year <<endl;
    cout << "CGPA: " << cgpa <<endl;
}

void StudentInfo::setID(string _id) {id = _id;}
void StudentInfo::setName(string _name) {name = _name;}
void StudentInfo::setDOB(DateOfBirth _dob) {dateOfBirth = _dob;}
void StudentInfo::setCGPA(double _cgpa) {cgpa = _cgpa;}
void StudentInfo::setInfo(string _id, string _name, DateOfBirth _dateOfBirth, double _cgpa)
{
    setName(_name);
    setID(_id);
    setDOB(_dateOfBirth);
    setCGPA(_cgpa);
}

