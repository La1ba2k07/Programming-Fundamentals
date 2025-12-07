#include <iostream>
using namespace std;

int main() 
{
    int n;
    float liters, cost, totalCost = 0;
    const float pricePerLiter = 275;
    float discount;

    cout << "Enter number of vehicles did you fuel: ";
    cin >> n;

    for(int i = 1; i <= n; i++) 
    {
        cout << "\nEnter liters of fuel for vehicle " << i << ": ";
        cin >> liters;

        cost = liters * pricePerLiter;

        //  2% discount if more than 40 liters
        if(liters > 40) 
        {
            discount = cost * 0.02;
            cost = cost - discount;
        }

        cout << "Cost for vehicle " << i << " = Rs. " << cost << endl;

        totalCost = totalCost + cost;
    }

    cout << "\nTotal cost for all vehicles = Rs. " << totalCost << endl;

    return 0;
}