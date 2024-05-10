#include <iostream>
#include <string>
using namespace std;

string encoded(const string& message, int shift) 
{
    string encoded = "";
    for (char ch : message) 
	{
        if (isupper(ch)) 
		{
            encoded+= char(int(ch + shift - 65) % 26 + 65);
        }
        
        else if (islower(ch)) 
		{
            encoded += char(int(ch + shift - 97) % 26 + 97);
        }
        
        else 
		{
            encoded += ch;
        }
    }
    return encoded;
}

string decode(const string& encoded, int shift) 
{
    return encode(encoded, 26 - shift);
}

int main() 
{
    int choice;
    cout << "Choose an option:\n";
    cout << "1. Encode\n";
    cout << "2. Decode\n";
    cin >> choice;

    if (choice == 1) 
	{
        string message;
        int shift;
        cout << "Enter the message to encode: ";
        cin.ignore();
        getline(cin, message);
        cout << "Enter the shift value: ";
        cin >> shift;
        cout << "Encoded Message: " << encode(message, shift) << endl;
    } 
    
    else if (choice == 2) 
	{
        string encoded;
        int shift;
        cout << "Enter the message to decode: ";
        cin.ignore();
        getline(cin, encoded);
        cout << "Enter the shift value: ";
        cin >> shift;
        cout << "Decoded Message: " << decode(encoded, shift) << endl;
    } 
    
    else 
	{
        cout << "Invalid choice! Exiting...\n";
    }

    return 0;
}

