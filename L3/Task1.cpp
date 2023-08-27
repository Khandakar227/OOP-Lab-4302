#include <iostream>
#define ll long long

using namespace std;

class Counter
{
private:
    int count = 0;
    int step_val = 5;

public:
    void setIncrementStep(int step_val)
    {
        this->step_val = step_val;
    }
    int getCount()
    {
        return count;
    }
    void increment()
    {
        count += step_val;
    }
    void resetCount()
    {
        count = 0;
    }
};

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    Counter counter = Counter();
    cout << "Initial count: " << counter.getCount() << endl;
    counter.increment();
    cout << "Incremented count: " << counter.getCount() << endl;
    counter.setIncrementStep(1);
    counter.increment();
    cout << "count after stetting increment: " << counter.getCount() << endl;

    return 0;
}