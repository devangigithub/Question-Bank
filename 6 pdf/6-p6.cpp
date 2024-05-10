#include <iostream>
using namespace std;

int main() 
{
    int treeHeight; 
    int ropeLength; 
    int distance=0;
    int distanceToGround;
    float i;
    
    cout<<"Enrter three height : ";
    cin>>treeHeight;
    cout<<"Enter rope length : ";
    cin>>ropeLength;
    
    
    distanceToGround = (ropeLength * ropeLength - treeHeight * treeHeight);	
	
    for (i = 1; i * i <= distanceToGround; i += 0.001) 
	{	
        distance = i;
    }
    cout<<"Distance between the tree and the end of the rope on the ground:"<<distance <<"meters";	//507 sqaure root is 22
    return 0;
}

