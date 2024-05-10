#include <iostream>
using namespace std;

int main()
{
    int e;
    int i;
    int j;
	int s;

    cout << "Enter the starting value : ";
    cin >> s;

    cout << "Enter the ending value : ";
    cin >> e;

    if(s<=e)
    {
        cout << endl
             << "Multiplication Tables between " <<s<< " and " <<e<< ":" <<endl;     

        for (i=s;i<=e;i++)
        {
            for (j=1;j<=10;j++)
            {
                cout<<i<< " x "<<j<< " = "<<i*j<<endl;
            }
            cout<<endl;
        }
    }
    else
    {
        cout << "Invalid input...." << endl;
    }

    return 0;
}
