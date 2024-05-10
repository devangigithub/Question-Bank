#include <iostream>
using namespace std;
int main() 
{
    int side1, side2, side3;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
    
    bool isValidTriangle = (side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2);

    if (!isValidTriangle) {
        std::cout << "Invalid triangle" << std::endl;
        return 0;
    }
    int side1Squared = side1 * side1;
    int side2Squared = side2 * side2;
    int side3Squared = side3 * side3;

    if (side1Squared + side2Squared == side3Squared || 
        side1Squared + side3Squared == side2Squared || 
        side2Squared + side3Squared == side1Squared) 
	{
        cout << "Right triangle" << endl;
    } 
	else if (side1Squared + side2Squared < side3Squared || 
               side1Squared + side3Squared < side2Squared || 
               side2Squared + side3Squared < side1Squared) 
	{
    	cout << "Obtuse triangle" <<endl;
    } 
	else 
	{
        cout << "Acute triangle" << endl;
    }

    return 0;
}

