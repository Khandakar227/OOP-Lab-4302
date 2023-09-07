#include <iostream>
#define ll long long
 
using namespace std;

class Flight
{
private:
    int FlightNumber;
    string Destination;
    float Distance, MaxFuelCapacity;

    int CalFuel()
    {
        return Distance <= 1000 ? 500 :
        Distance > 1000 && Distance <= 2000 ? 1100 :
        2200;
    }
public:
    void FeedInfo()
    {
        cout << "| Flight Number | Destination | Distance | MaxFuelCapacity |" << endl;
        cin >> FlightNumber >> Destination >> Distance >> MaxFuelCapacity;
        if (FlightNumber <= 0 || Destination.empty() || Distance < 0 || MaxFuelCapacity < 0) {
            cout << "Error: Invalid Input" << endl;
        }
    }
    void ShowInfo()
    {
        cout << "Flight Number: " << FlightNumber <<endl;
        cout << "Destination: " << Destination <<endl;
        cout << "Distance: " << Distance <<endl;
        cout << "Max Fuel Capacity: " << MaxFuelCapacity <<endl;
        cout << (CalFuel() > MaxFuelCapacity ? "Not sufficient Fuel Capacity for this flight"
        :
        "Fuel Capacity is fit for this flight distance") << endl;
    }
};



int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    Flight f;
    f.FeedInfo();
    f.ShowInfo();
    
    return 0;
}