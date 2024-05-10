#include <iostream>
using namespace std;

void Character(char character) 
{
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
    	{
    		cout << "Alphabet" << endl;
		}
        
    else if (character >= '0' && character <= '9')
        {
        	cout << "Digit" << endl;
		}		
    else
       {
       		cout << "Symbol" << endl;
	   }
}

int main() 
{
    char n;
    cout << "Enter a character: ";
    cin >> n;
    Character(n);
    
    return 0;
}

