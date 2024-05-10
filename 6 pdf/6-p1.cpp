#include <iostream>
#include <string.h>

using namespace std;
class GroceryItem 
{
	public:
		
    char name[50];
    double price;
    int quantity;
};
class ShoppingCart 
{
	private:
		
    GroceryItem items[100];
    int itemCount;
    double taxRate;
    
	public:
		
    ShoppingCart(double tr) : itemCount(0), taxRate(tr) {}

    void addItem(const char name[], double price, int quantity) 
    {
        if (itemCount < 100) 
        {
            strcpy(items[itemCount].name, name);
            items[itemCount].price = price;
            items[itemCount].quantity = quantity;
            itemCount++;
        } 
        else 
        {
            cout << "Cart is full!" << endl;
        }
    }
    float calculateTotalPrice() 
    {
        float total = 0;
        for (int i = 0; i < itemCount; i++) 
        {
            total += items[i].price * items[i].quantity;
        }
        return total * (1 + taxRate);
    }
};
int main() 
{
    ShoppingCart cart(0.1); 
    cart.addItem("Bread", 2.0, 2);
    cart.addItem("Milk", 3.0, 1);
    cart.addItem("Soup", 2.5, 3);

    float total = cart.calculateTotalPrice();
    
    cout << "Total Price with Tax: " << total << endl;
    
    return 0;
}

