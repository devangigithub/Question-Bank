#include <iostream>
using namespace std;


float calculateArea(float base, float height) 
{
    return 0.5 * base * height;
}

int sumOfDigits(int number) 
{
    int sum = 0;
    while (number != 0) 
	{
        sum=sum+number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    
    float base = 56.0;
    float height = 21.0;
    int sum;
    float area;

        area = calculateArea(base, height);
    	cout << "Area of the triangle square units is :" << area << endl;
    	
        sum = sumOfDigits(static_cast<int>(area));
        cout << "Sum of all digits of the area: " << sum << endl;

    return 0;
}
