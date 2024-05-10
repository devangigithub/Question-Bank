#include <iostream>
#include<math.h>
using namespace std;

class ScientificCalculator 
{
public:
//		int sqrt;
//		int fmod;
		
    static double findMax(double a, double b, double c) 
	{
        return std::max(std::max(a, b), c);
    }

    
    static double square(double num) 
	{
        return num * num;
    }

        static double squareRoot(double num) 
		{
        if (num < 0) 
		{
            cout << "Error: Cannot calculate square root of a negative number." <<endl;
            return 0; 
        }
        return sqrt(num);
    }


    static void findComponents(double num) 
	{
        cout << "Components of " << num << " are: ";
        for (int i = 1; i <= num; ++i) 
		{
            if (fmod(num, i) == 0) 
			{
                cout << i << " ";
            }
        }
    }
};

int main() {
    double num1, num2, num3;

    
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    double max = ScientificCalculator::findMax(num1, num2, num3);
    cout << "Maximum number is: " << max << std::endl;
	cout << "Square of " << num1 << " is: " << ScientificCalculator::square(num1) << std::endl;
    cout << "Square root of " << num2 << " is: " << ScientificCalculator::squareRoot(num2) << std::endl;

    
    ScientificCalculator::findComponents(num3);

    return 0;
}

