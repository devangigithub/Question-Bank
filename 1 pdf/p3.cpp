#include<iostream>

using namespace std;
int main()
{
	int a;
	int b;
	int quotient;
	int remainder;
	
	cout<<"quotient:";
	cin>>a;
	cout<<"remainder.:";
	cin>>b;
			
	quotient=a/b;
	remainder=a%b;
	
	cout<<"quotient is:"<<quotient<<endl;
	cout<<"remainder is:"<<remainder<<endl;
	
	return 0;
}
