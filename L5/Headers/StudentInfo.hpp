#include<iostream>
using namespace std;

typedef struct _DateOfBirth {
    int day;
    int month;
    int year;
} DateOfBirth;

class StudentInfo
{
private:
    string id, name;
    DateOfBirth dateOfBirth;
    double cgpa;
public:
    string getID();
    string getName();
    DateOfBirth getDOB();
    double getCGPA();
    int getAge() const;
    void getInfo();

    void setID(string);
    void setName(string);
    void setDOB(DateOfBirth);
    void setCGPA(double);
    void setInfo(string _id, string _name, DateOfBirth _dateOfBirth, double _cgpa);
};
