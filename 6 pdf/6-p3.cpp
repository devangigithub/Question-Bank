#include <iostream>
#include <string.h>
using namespace std;
class HauntedHouseAuction 
{
	private:
    char companies[3][20];
    int highestBid;
    char winner[20];
	public:
    	HauntedHouseAuction(char comp[3][20]) : highestBid(0) 
		{
        	for(int i = 0; i < 3; i++) 
			{
            	strcpy(companies[i], comp[i]);
        	}
    	}
    void startAuction() 
	{
        for (int i = 0; i < 3; i++) 
		{
            int n;
            cout << "Enter bid for " << companies[i] << ": ";
            cin >> n;
            if (n > highestBid) 
			{
                highestBid = n;
                strcpy(winner, companies[i]);
            }
        }
        cout << "The haunted house is sold to " << winner << " for" << highestBid <<endl;
    }
};
int main() 
{
    char companies[3][20] = {"Company A", "Company B", "Company C"};
    HauntedHouseAuction auction(companies);
    auction.startAuction();
    return 0;
}

