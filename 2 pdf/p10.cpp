#include <iostream>

using namespace std;

int main() 
{
    float a;
	float r;
	float gst;

    
    cout << "Enter the amount : ";
    cin >> a;
    cout << "Enter the GST rate : ";
    cin >> r;
    
    gst = (amount * rate) / 100;
    
    cout << "GST amount : " << gst << endl;

    return 0;
}

