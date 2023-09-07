#include <iostream>
#define ll long long
 
using namespace std;

class ZooAnimal
{
private:
    string nameOfAnimal;
    int birthYear, cageNumber, height;
    float weight;

public:
    ZooAnimal(string nameOfAnimal, int birthYear, int cageNumber, float weight, int height);
    //getters
    string getNameOfAnimal();
    int getBirthYear();
    int getCageNumber();
    float getWeight();
    float getHeight();
    int getAge();

    void displayInfo();

    //setters
    void setNameOfAnimal(string _nameOfAnimal);
    void setBirthYear(int _by);
    void setCageNumber(int cn);
    void setWeight(float w);
    void setHeight(int h);
    ~ZooAnimal();
};

ZooAnimal::ZooAnimal(string _nameOfAnimal = "", int _birthYear=2023, int _cageNumber=0, float _weight=1, int _height=1)
{
    nameOfAnimal = _nameOfAnimal;
    birthYear = _birthYear;
    cageNumber = _cageNumber;
    weight = _weight;
    height = _height;
}

//getters
string ZooAnimal::getNameOfAnimal()
{
    return nameOfAnimal;
}
int ZooAnimal::getBirthYear()
{
    return birthYear;
}
int ZooAnimal::getCageNumber()
{
    return cageNumber;
}
float ZooAnimal::getWeight()
{
    return weight;
}
float ZooAnimal::getHeight()
{
    return height;
}

int ZooAnimal::getAge()
{
    return 2023 - birthYear;
}

//setters
void ZooAnimal::setNameOfAnimal(string _nameOfAnimal)
{
    nameOfAnimal = _nameOfAnimal;
}
void ZooAnimal::setBirthYear(int _by)
{
    birthYear = _by;
}
void ZooAnimal::setCageNumber(int cn)
{
    cageNumber = cn;
}
void ZooAnimal::setWeight(float w)
{
    weight = w;
}
void ZooAnimal::setHeight(int h)
{
    height = h;
}
void ZooAnimal::displayInfo()
{
    cout << "Cage Number: " << cageNumber << endl;
    cout << "Animal Name: " << nameOfAnimal << endl;
    cout << "Birth Year: " << birthYear << endl;
    cout << "Height: " << height << endl;
    cout << "Weight: " << weight << endl;
}
ZooAnimal::~ZooAnimal()
{
    displayInfo();
}


int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    ZooAnimal tiger("Cheetah", 2020, 1, 10, 1);
    tiger.displayInfo();
    cout << endl;
    cout << "Age: " << tiger.getAge() << endl;
    tiger.setNameOfAnimal("Jaguar");
    cout << tiger.getNameOfAnimal() <<endl;
    tiger.setBirthYear(2021);
    cout << "Age: " << tiger.getAge() << endl;
    tiger.setWeight(20);
    cout << "Weight: " << tiger.getWeight() << endl;

    return 0;
}