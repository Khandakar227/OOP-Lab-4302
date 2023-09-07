#include <iostream>
#define ll long long
 
using namespace std;

class Calculator
{
private:
    double value;
public:
    Calculator();
    Calculator(int val);
    int getValue();
    void setValue(int val);
    void add( int val );
    void subtract( int val );
    void multiply( int val );
    void divideBy( int val );
    void clear();
    void display();
    ~Calculator();
};

Calculator::Calculator()
{
    value = 0;
}
Calculator::Calculator(int val)
{
    value = val;
}
int Calculator::getValue()
{
    return value;
}
void Calculator::setValue(int val)
{
    value = val;
}
void Calculator::add( int val )
{
    value += val;
}
void Calculator::subtract( int val )
{
    value-= val;
}
void Calculator::multiply( int val )
{
    value*= val;
}
void Calculator::divideBy( int val )
{
    if (val == 0) 
    {
        cout << "Math error" << endl;
        return;
    }
    value /= val;
}
void Calculator::clear()
{
    value = 0;
}
void Calculator::display()
{
    cout << value<<endl;
}
Calculator::~Calculator()
{
    cout << "Calculator object is destroyed."<<endl;
    clear();
}


int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    Calculator C(10);
    C.add(10);
    C.display();
    C.subtract(5);
    C.display();
    cout << "getValue: "<<C.getValue()<<endl;
    C.multiply(3);
    C.display();
    C.divideBy(7);
    C.display();
    C.clear();
    C.display();
    C.setValue(27);
    cout << "getValue: "<<C.getValue()<<endl;
    
    return 0;
}