#include <iostream>
using namespace std;
int main() 
{
     int cashewsSoldPerMonth = 123500;
     int revenuePerMonth = 78000;
     int numberOfMonths = 3;
     int scaleFactor = 10;
	 int totalCashews;
	 int totalRevenue;
	 int revenueOneMonth;
	 float percentageIncrease;
	 
	 cout<<"Enter company sells ";
	 cin>>cashewsSoldPerMonth;
	 cout<<"Enter revenue per month : ";
	 cin>>revenuePerMonth;
	 cout<<"Enter number of mouth : ";
	 cin>> numberOfMonths;
	 cout<<"Enter scale factor : ";
	 cin>>scaleFactor;
	 
    totalCashews = cashewsSoldPerMonth * scaleFactor * numberOfMonths;
    totalRevenue = revenuePerMonth * numberOfMonths * scaleFactor;

    revenueOneMonth = revenuePerMonth * scaleFactor;

    percentageIncrease = ((totalRevenue - revenueOneMonth) / revenueOneMonth) * 100;

    cout << "Total Revenue: " << totalRevenue << endl;
    cout << "Percentage Increase % : " << percentageIncrease << endl;
    return 0;
}

