#include<iostream>
using namespace std;
int main()
{
	int temp;
	int i;
	int n;
	int first=0;
	int second=1;
	
	cout<<"Enter number:";
	cin>>n; 
	
	cout<<"factorial series:";
	for(i=0;i<n;i++)
	{
		if(i<=1)
		{
			temp=i;
		}
		else
		{
			temp=first+second;
			first=second;
			second=temp;
		}
		cout<<" "<<temp<<endl;
	}
	return 0;
}
