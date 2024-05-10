#include <iostream>
using namespace std;
int main() 
{
    float initialCost;
    cout << "Enter the initial cost of solar panels installation: $";
    cin >> initialCost;
    if (initialCost < 0) 
	{
        cout << "Invalid input! Cost cannot be negative." << endl;
        return 1;
	}
    float federalAidPercentage = 30.0;
    float stateAidPercentage = 20.0;  

    float totalCostFederal = initialCost * (1 - federalAidPercentage / 100);
    float totalCostState = initialCost * (1 - stateAidPercentage / 100);

    cout << "Total cost after applying " << federalAidPercentage << "% federal government aid: $" << totalCostFederal << endl;
    cout << "Total cost after applying " << stateAidPercentage << "% state government aid: $" << totalCostState << endl;

    return 0;
}

