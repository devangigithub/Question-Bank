#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char n[20]; 
	int len;
	int i;
	int flag=0;
	
	cout<<"Enter string:";
	cin>>n;
	
	len=strlen(n);
	
	for(i=0;i<len;i++)
	{
		if(n[i]!=n[len-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"palindrome string...";
	}
	else
	{
		cout<<"not palindrome string...";
	}
	return 0;	
}
