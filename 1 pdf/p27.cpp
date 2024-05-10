#include<iostream>
using namespace std;
int main()
{
	int num;
	int i;
	int sum=0;
	cout<<"enter number:";
	cin>>num;
	
	while(num!=0)
	{
		sum=sum+(num%10);
		num=num/10;
	}
	cout<<"Sum of all digits:"<<sum;
	return 0;
}
