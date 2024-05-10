#include <iostream>
using namespace std;

char shorter_route(int route_a, int route_b) 
{
    if (route_a < route_b) 
	{
        return 'A';
    } 
	else if (route_a > route_b) 
	{
        return 'B';
    } 
	else 
	{
        return 'Equal';
    }
}

int main() 
{
   
    int route_A_distance;
    int route_B_distance;
    char shorter;
    
    cout<<"Enter distance od route : ";
    cin>>route_A_distance;
    cout<<"Enter distance od route : ";
    cin>>route_B_distance;
    
    shorter = shorter_route(route_A_distance, route_B_distance);
    cout << "Shorter Route: " << shorter <<endl;
    return 0;
}

