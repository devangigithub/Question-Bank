#include <iostream>
using namespace std;

int main() 
{
    int killingScores[10];
	int maxScore = killingScores[0];
    int soldierIndex = 0;
    
    for (int i = 0; i < 10; ++i) 
	{
        cout << "Soldier :" << i+1<<endl;
        cin >> killingScores[i];
    }

    
    for (int i = 1; i < 10; ++i) 
	{
        if (killingScores[i] > maxScore) 
		{
            maxScore = killingScores[i];
            soldierIndex = i;
        }
    }

    cout << "Soldier " << soldierIndex + 1 << " has the highest killing score of " << maxScore ;

    return 0;
}

