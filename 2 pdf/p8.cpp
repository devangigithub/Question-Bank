#include <iostream>  
using namespace std;  
int main()  
{  
	int a[10];
	int n;
	int i;
	    
	cout<<"Enter the number to convert: ";    
	cin>>n;    
 
	while(n>0) 
	{
        a[i++] = n % 2;
        n /= 2;
    } 
	  
	cout<<"Binary of the given number= ";    
	for(i=i-1;i>=0;i--)    
	{    
	cout<<a[i];    
	}    
}  
