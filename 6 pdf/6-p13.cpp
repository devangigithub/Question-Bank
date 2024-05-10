#include <iostream>
using namespace std;
class Counter 
{
	private:
		int count;
	public:
    Counter() 
	{
        count = 0;
    }
    void increment() 
	{
        count++;
    }
    void decrement() 
	{
        count--;
    }
    void display() 
	{
        cout << "Counter: " << count << endl;
    }
};

int main() 
{
    Counter counter;

    char key;
    while (true) 
	{
        cout << "Press 'u' to increment, 'd' to decrement, or 'q' to quit: ";
        cin >> key;

        if (key == 'u') 
		{
            counter.increment();
        } 
		else if (key == 'd') 
		{
            counter.decrement();
        } 
		else if (key == 'q') 
		{
            break;
        }
        counter.display();
    }
    return 0;
}

