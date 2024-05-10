#include <iostream>
using namespace std;
class AlphabetASCII 
{
private:
    int asciiValues[9]; //after skipping 3
public:
    AlphabetASCII() 
	{
        char c = 'a';
        for (int i = 0; i < 9; i++) 
		{
            asciiValues[i] = (c);
            c += 3;
        }
    }
    void getASCIIValues(int result[]) 
	{
        for (int i = 0; i < 9; i++) 
		{
            result[i] = asciiValues[i];
        }
    }
    string isSumOddOrEven() 
	{
        int sum = 0;
        for (int i = 0; i < 9; i++) 
		{
            sum += asciiValues[i];
        }
        return (sum % 2 == 0) ? "Even" : "Odd";
    }
};
int main() 
{
    AlphabetASCII alphaASCII;
    
    int asciiValues[9];
    
    alphaASCII.getASCIIValues(asciiValues);
    
    cout << "Array of ASCII values skipping 3 characters: ";
    
    for (int i = 0; i < 9; i++) 
	{
        cout << asciiValues[i] << " ";
    }
    cout <<endl<< "Sum of ASCII values is " << alphaASCII.isSumOddOrEven();
    return 0;
}

