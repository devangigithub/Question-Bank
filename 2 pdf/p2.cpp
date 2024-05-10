#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    int count = 0;
    int i;
    float average;
    
    cout<<"Enter the number : ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(i%2==0)

        {
            sum=sum+i;
            count++;
            cout<<" "<<i<<endl;
        }
    }

    average=sum/count;

    cout<<"The average of all even numbers is :" << average << endl;

    return 0;
}
