#include<iostream>
using namespace std;
class house{
	public:
		int house;
		void setData()
		{
			cout<<"house:";
			cin>>house;
		}
		void getData()
		{
			cout<<"House:"<<house<<endl;
		}
};
class kitchen :public house{
	public:
		int kitchen;
		void setData1()
		{
			cout<<"Kitchen:";
			cin>>kitchen;
		}
		void getData1()
		{
			cout<<"Kitchen:"<<kitchen<<endl;
		}
};
class badroom:public house{
	public:
		int badroom;
		void setData2()
		{
			cout<<"badroom:";
			cin>>badroom;
		}
		void getData2()
		{
			cout<<"badroom:"<<badroom<<endl;
		}
};
class backyard:public house{
		public:
		int backyard;
		void setData3()
		{
			cout<<"backyard:";
			cin>>backyard;
		}
		void getData3()
		{
			cout<<"backyard:"<<backyard<<endl;
		}
};
class dinndertable:public kitchen{
	public:
		int dinndertable;
		void setData4()
		{
			cout<<"dinndertable:";
			cin>>dinndertable;
		}
		void getData4()
		{
			cout<<"dinndertable:"<<dinndertable<<endl;
		}
};
class bathroom:public badroom{
	public:
		int bathroom;
		void setData5()
		{
			cout<<"bathroom:";
			cin>>bathroom;
		}
		void getData5()
		{
			cout<<"bathroom:"<<bathroom<<endl;
		}
};
class garage:public backyard{
	public:
		int garage;
		void setData6()
		{
			cout<<"garage:";
			cin>>garage;
		}
		void getData6()
		{
			cout<<"garage:"<<garage<<endl;
		}
};
int main()
{
	kitchen k;
	badroom b;
	backyard a;
	dinndertable d;
	bathroom t;
	garage g;
	
	k.setData1();
	b.setData2();
	a.setData3();
	d.setData4();
	t.setData5();
	g.setData6();
	
	k.getData1();
	b.getData2();
	a.getData3();
	d.getData4();
	t.getData5();
	g.getData6();
	return 0;
}
