#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int main() 
{ 
	
	 int randomNumber;
	 int i;
	 
    srand(time(0));
    for(i=0;i<5;i++)
     randomNumber = rand() % 900000 + 100000;
    
    cout << "Random Number: " << randomNumber << endl;
    
    return 0;
}
