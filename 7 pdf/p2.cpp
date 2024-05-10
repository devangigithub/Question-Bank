#include <iostream>
using namespace std;

class Calculator 
{
public:
    int add(int a, int b) 
	{
        return a + b;
    }

    int subtract(int a, int b) 
	{
        return a - b;
    }

    int multiply(int a, int b) 
	{
        return a * b;
    }

    int divide(int a, int b) 
	{
        return a / b;
    }

    int modulus(int a, int b) 
	{
        return a % b;
    }
};

int main() 
{	
	int a;
	int b;
    char choice;
    Calculator calc;

    do {
        cout << "Choose an operation:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulus" << endl;
        cout << "0. Exit" << endl;
        
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
		{
            case 1: 
			{
                
                cout << "Enter a numbers: ";
                cin >> a;
                cout << "Enter b numbers: ";
                cin>> b;
                cout << "Result: " << calc.add(a, b) << endl;
                break;
            }
            case 2: 
			{
                cout << "Enter a numbers: ";
                cin >> a;
                cout << "Enter b numbers: ";
                cin>> b;
                cout << "Result: " << calc.subtract(a, b) << endl;
                break;
            }
            case 3:
			{
            	
                cout << "Enter a numbers: ";
                cin >> a;
                cout << "Enter b numbers: ";
                cin>> b;
                cout << "Result: " << calc.multiply(a, b) << endl;
                break;
            }s
            case 4: 
			{
                 cout << "Enter a numbers: ";
                cin >> a;
                cout << "Enter b numbers: ";
                cin>> b;
                cout << "Result: " << calc.divide(a, b) << endl;
                break;
            }
            case 5: 
			{
                cout << "Enter a numbers: ";
                cin >> a;
                cout << "Enter b numbers: ";
                cin>> b;
                cout << "Result: " << calc.modulus(a, b) << endl;
                break;
            }
            case 0:
                cout << endl << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice == 0);

    return 0;
}

