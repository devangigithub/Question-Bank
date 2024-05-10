#include <iostream>
using namespace std;
int main() 
{
    int number;
    cout<<"Enter number:";
    cin>>number;
    number = (((((number + 8) * 3) - 12) + 5) + 2004) - 2024;
    
    bool isDivisibleBy7 = (number % 7 == 0);
    cout << "Final number after performing all operations: " << number << endl;
    if (isDivisibleBy7) 
	{
        cout << "The final number is divisible by 7." << endl;
    } 
	else 
	{
        cout << "The final number is not divisible by 7." << endl;
    }
    return 0;
}

