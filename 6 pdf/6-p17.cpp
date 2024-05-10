#include<iostream>
#include<string.h>
using namespace std;
class player
{
	public:
		string a;
		void setData()
		{
			cout<<"Enter player name:";
			cin>>a;
		}
};
class cricketplayer:public player{
	public:
	public:
		string b;
		void setData1()
		{
			cout<<"Enter cricketplayer name:";
			cin>>b;
		}	
};
class batman:public cricketplayer{
	public:
		string c;
		void setData2()
		{
			cout<<"Enter batman:";
			cin>>c;
		}
};
class bowler:public cricketplayer{
	public:
		string d;
		void setData3()
		{
			cout<<"Enter bowler:";
			cin>>d;
		}
};
int main()
{
	cricketplayer c;
	batman b;
	bowler o;
	c.setData1();
	b.setData2();
	return 0;
}
