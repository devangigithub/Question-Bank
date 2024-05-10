#include <iostream>
using namespace std;

int joinRopes(int rope1, int rope2) 
{
    return rope1 + rope2;
}

float joinRopes(float rope1, float rope2) 
{
    return rope1 + rope2;
}

int main() 
{
    int length1;
    int length2;
    float length3;
    float length4;
	int totalLengthInt;
	float totalLengthFloat;
	
	cout<<"Enter length of rope :"<<endl;
	cin>>length1;
	cout<<"Enter length of rope :"<<endl;
	cin>>length2;
    totalLengthInt = joinRopes(length1, length2);

    cout << "Total length after joining : " << totalLengthInt << endl;

	cout<<"Enter length of rope :"<<endl;
	cin>>length3;
	cout<<"Enter length of rope :"<<endl;
	cin>>length4;
    totalLengthFloat = joinRopes(length3, length4);

    cout << "Total length after joining : " << totalLengthFloat << endl;

    return 0;
}

