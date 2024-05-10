#include <iostream>
using namespace std;


float calculateBMI(float weight,float height) 
{
   
    return weight/(height*height);
}

string interpretBMI(float bmi) 
{
    if (bmi<18.5) 
	{
        return "Underweight";
    } 
	else if (bmi<25) 
	{
        return "Normal weight";
    } 
	else if (bmi<30) 
	{
        return "Overweight";
    } 
	else 
	{
        return "Obese";
    }
}

int main() {
    float weight, height;
    string category;
    float bmi;
    
    cout << "Enter weight in kilograms: ";
    cin >> weight;
    cout << "Enter height in meters: ";
    cin >> height;

    
    bmi = calculateBMI(weight,height);

    category = interpretBMI(bmi);

    cout << "BMI: " <<bmi<<endl;
    cout << "Category: " <<category<<endl;

    return 0;
}

