#include<iostream>
using namespace std;
int main()
{
	int n;
	int i;
	int fact=1;
	
	cout<<"Enter number:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"factorial number:"<<fact;
	
	return 0;
}
