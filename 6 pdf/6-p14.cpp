#include <iostream>
using namespace std;
int calculateElectricityBill(int units) 
{
    int bill = 0;
    if (units <= 50) 
	{
        bill = units * 0.50;
    } 
	else if (units <= 150) 
	{
        bill = 50 * 0.50 + (units - 50) * 0.75;
    } 
	else if (units <= 250) 
	{
        bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } 
	else 
	{
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }
    if (bill > 300) 
	{
        bill += bill * 0.15; // 15% surcharge for bills over 300
    }
    return bill;
}
int main() 
{
    int units;
    cout << "Enter total units consumed in a month: ";
    cin >> units;

    if (units < 0) 
	{
        cout << "Invalid input! Units consumed cannot be negative." << endl;
        return 1;
    }
    float bill = calculateElectricityBill(units);
    cout << "Electricity bill for " << units << " units: " << bill << endl;
    return 0;
}

