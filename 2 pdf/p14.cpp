#include <iostream>
using namespace std;

float calculateTax(float income) 
{
    float tax = 0;
    
	const float amout1 = 250000;
    const float amout2 = 500000;
    const float amout3 = 1000000;
    const float taxr1 = 0.05;
    const float taxr2 = 0.1;
    const float taxr3 = 0.2;

    if (income <= amout1) 
	{
        tax = income * taxr1;
    } 
	else if (income <= amout2) 
	{
        tax = amout1 * taxr1 + (income - amout1) * taxr2;
    } 
	else if (income <= amout3) 
	{
        tax = amout1*taxr1+(amout2-amout1)*taxr2+(income-amout2)*taxr3;
    } 
	else 
	{
        tax = amout1*taxr1+(amout2-amout1)*taxr2+(amout3-amout2)*taxr3+(income-amout3)*0.3;
    }

    return tax;
}

int main() 
{
    float income;
	float tax;
    
    cout << "Enter the annual income: ";
    cin >> income;

	tax = calculateTax(income);
	
	cout << "Income tax: " << tax << endl;

    return 0;
}

