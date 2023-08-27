#include <iostream>
#define ll long long

using namespace std;

class RationalNumber
{
private:
    int numerator = 0, denominator = 1;

public:
    void assign(int numerator, int denominator)
    {
        if (!denominator)
        {
            cout << "[Error]: Denominator can not be zero" << endl;
            return;
        }
        this->denominator = denominator;
        this->numerator = numerator;
    }

    double convert() {
        if (!denominator) {
            cout << "[Error]: Denominator can not be zero" << endl;
            return 0;
        }

        return (double)numerator/denominator;
    }
    void invert () {
        int temp = numerator;
        numerator = denominator;
        denominator = temp;
    }
    void print() {
        cout << (int)numerator << "/" << (int)denominator << endl;
    }
};


int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    RationalNumber rn = RationalNumber();
    int n, d;
    cin >> n >> d;
    rn.assign(n, d);
    cout << "Converted value: " << rn.convert() <<endl;
    rn.print();
    rn.invert();
    cout << "Inverted: " << rn.convert() <<endl;
    rn.print();

    return 0;
}