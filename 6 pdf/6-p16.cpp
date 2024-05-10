#include <iostream>
using namespace std;
int main() 
{
    int length, width, height;
    cout << "Enter length, width, and height of the box: ";
    cin >> length >> width >> height;

    int volume = length * width * height;
    cout << "Volume of the box: " << volume << endl;
    cout << "Volume is " << (volume % 2 == 0 ? "even." : "odd.") << endl;
    return 0;
}

