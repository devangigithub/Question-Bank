#include<iostream>
using namespace std;
int main()
{
	int n;
	int i;
	int count=0;
	
	cout<<"Enter number: ";
	cin>>n;
	
	while(n!=0)
	{
		n/=10;
		count++;
	}
	cout<<"Total digit :"<<count;
	return 0;
}
