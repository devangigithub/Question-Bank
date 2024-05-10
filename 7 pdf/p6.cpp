#include <iostream>
#include <string>
using namespace std;

class passwordd 
{
private:
    string password;

public:
    passwordd(string pw) : password(pw) {}

    void printStrength() const 
	{
        if (password.length() < 6) 
		{
            cout << "Weak Password!" << endl;
            return;
        }

        for (size_t i = 0; i < password.length(); ++i) 
		{
            char ch = password[i];
            if (!(ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')  ) 
			{
                cout << "Strong Password!" << endl;
                return;
            }
        }
		cout << "Weak Password!" << endl;
        
    }
};

int main() 
{
    string password;
    cout << "Enter a password: ";
    getline(cin, password);

    passwordd detector(password);
    detector.printStrength();

    return 0;
}

