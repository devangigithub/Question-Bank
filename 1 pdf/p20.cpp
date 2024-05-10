#include<iostream>
using namespace std;
int main()
{
	int n;
	int rem=0,rev=0;
	
	cout<<"Enter number:";
	cin>>n;
	
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;	
	}
	
	cout<<"Reverser number: "<<rev;
	
	return 0;
}
