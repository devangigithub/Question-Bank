#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float amout; 
	float rate; 
	float emi;
    int term;
	float monthlyRate;
    
    cout<<"Enter the loan amount : ";
    cin>>amout;
    cout << "Enter the annual interest rate : ";
    cin >> rate;
    cout << "Enter the loan term : ";
    cin >> term;

   
    monthlyRate = rate/12/100;

    emi = (amout*monthlyRate*pow(1+monthlyRate,term))/(pow(1+monthlyRate,term)-1);

    cout << "Monthly EMI: " <<emi<<endl;

    return 0;
}

