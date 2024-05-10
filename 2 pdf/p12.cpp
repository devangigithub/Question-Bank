#include <iostream>
using namespace std;

void Second(int seconds) 
{
    int h;
	int m;
	int s;

    h = seconds/3600;
    m = (seconds%3600)/60;
    s = (seconds%3600)%60;

    cout << "Time: " <<h<< " hours, " <<m<< " minutes, " <<s<< " seconds" <<endl;
}

int main() 
{
    int seconds;
    
    cout << "Enter the number of seconds: ";
    cin >> seconds;
	
	Second(seconds);

    return 0;
}

