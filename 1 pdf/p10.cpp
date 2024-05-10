#include <iostream>
using namespace std;
int main() 
{
    int totalDays;
    int year;
	int week;
	int remainingDays;
	
    cout << "Enter total days: ";
    cin >> totalDays;

    year = totalDays / 365;
    remainingDays = totalDays % 365;
    week = remainingDays / 7;
    remainingDays = remainingDays % 7;
    
    cout << "Years: " << year << endl;
    cout << "Weeks: " << week << endl;
    cout << "Days: " << remainingDays << endl;
    
    return 0;
}

