#include <iostream>
using namespace std;
int main() 
{
    int a;
	int b;
	int c;
    float avg;
    int pmarks=25;
    
	cout << "Enter the marks of three subjects: ";
    cin >> a >> b >> c;
	   
    avg = (a + b + c) / 3.0;
    cout << "Average marks: " << avg << endl;
    if (avg >= pmarks) 
	{
        cout << "Congratulations! you are passed." << endl;
    } else
	{
        cout << "Sorry! you are failed." << endl;
    }
    return 0;
}

