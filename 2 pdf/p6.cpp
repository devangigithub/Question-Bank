#include <iostream>

using namespace std;

int main() {
    char ope;
    float num1;
	float num2;

    do {
        cout << "Enter the operation (+, -, *, /) or 'e' to exit: ";
        cin >> ope;

        if (ope == 'e' || ope == 'E')
        
            break;

        cout << "Enter a numbers: ";
        cin >> num1 ;
        cout << "Enter b numbers: ";
        cin  >> num2;


        switch (ope) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                    cout << "Result: " << num1 / num2 << endl;
                break;
            default:
               cout << "Invalid operation! Please try again." << endl;  
                
    		 }
    } while (true);

    cout << "Exiting calculator. Goodbye!" << endl;
	   
    return 0;
}

