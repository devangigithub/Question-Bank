#include<iostream>
using namespace std;
int main()
{
	int p;
	int r;
	int t;
	
	float i;
	cout<<"Principal:";
	cin>>p;
	cout<<"Rate:";
	cin>>r;
	cout<<"Time:";
	cin>>t;
	
	i=(p*r*t)/100;
	cout<<"Simple Intrest is:"<<i;
	
	return 0;
}
