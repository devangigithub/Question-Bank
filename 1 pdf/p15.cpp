#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	int vowel=0;
	int cons=0;
	int i;
	
	cout<<"Enter string:";
	cin>>s;
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z')
		{
			if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
				vowel++;	
			else
				cons++;
		}
	}
	
	cout<<"vowel: "<<vowel<<endl;
	cout<<"constant: "<<cons;
	
	return 0;
}
