#include <iostream>
using namespace std;
float calculateGST(float amount, float gstRate) 
{
    return (amount * gstRate) / 100;
}
int main() 
{
    char item[20];
    float itemPrice;
    int itemType;
    float totalTax = 0;
    
    cout << "item: ";
    cin >> item;
    cout << "Enter the price of the item: ";
    cin >> itemPrice;
    cout << "Enter the type of item (1 for 5%, 2 for 12%, 3 for 18%, 4 for 28%): ";
    cin >> itemType;

   
    switch (itemType) 
	{
        case 1:
            totalTax = calculateGST(itemPrice, 5);
            break;
        case 2:
            totalTax = calculateGST(itemPrice, 12);
            break;
        case 3:
            totalTax = calculateGST(itemPrice, 18);
            break;
        case 4:
            totalTax = calculateGST(itemPrice, 28);
            break;
        default:
            cout << "Invalid item type!" << std::endl;
            return 1; 
    }
    float totalPrice = itemPrice + totalTax;
    cout << "Price of the item: " << itemPrice <<endl;
    cout << "Total tax: " << totalTax <<"%"<< endl;
	cout << "Total price including tax: " << totalPrice << endl;
    return 0;
}

