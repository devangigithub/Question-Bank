#include <iostream>
#include <string.h>
using namespace std;
class StringComparator 
{
	public:
    int compare(string str1,  string str2) 
    {
        return str1 == str2 ? 1 : 0;
    }
};
int main() 
{	
    StringComparator comparator;
    
    string s1,s2;
    cout<<"Enter string:-";
    cin>>s1;
    cout<<"Enter string:-";
    cin>>s2;
    cout << "Comparison of strings: " << comparator.compare(s1, s2) << endl;
    return 0;
}

