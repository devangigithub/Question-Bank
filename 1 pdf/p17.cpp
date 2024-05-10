#include<iostream>
using namespace std;

class A{
	int n;
	int count;
	
	public:
		void input()
		{
			cout<<"Enter the number : ";
			cin>>n;
			
		}
		void output()
		{
			count=0;
			int i;
			for(i=1;i<=n;i++)
			{
				if(n%i==0)
				{
					count++;
				}
			}
			if(count==2)
			cout<<"prime number...";
			else
			cout<<"Not prime number...";
		}
};
int main()
{
	A a;
	a.input();
	a.output();
	
	
	return 0;
}
