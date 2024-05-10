#include <iostream>
using namespace std;
int main() 
{
    int ladderLength = 15;
    int groundDistance = 7; 
	int distance=0;
	
    int wallHeight = (ladderLength * ladderLength - groundDistance * groundDistance);
    
	for (float i = 1; i * i <= wallHeight; i += 0.001) 
	{	
        distance = i;
    }
    cout << "The wall's height is: " << distance << " meters" << endl;
    return 0;
}

