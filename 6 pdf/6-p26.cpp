#include<iostream>
using namespace std;
class A{
	public:
			int id;
			string name;
			string role;
			int salary;
			int experience;
			string comp_name;
			string address;
			string email;
			int contact;
			
		void setData()
		{
			cout<<"Enter ID:";
			cin>>id;
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter role:";
			cin>>role;
		}	
};
class B: public A{
	public:
		void setData()
		{
			A::setData();
			cout<<"Enter salary:";
			cin>>salary;
			cout<<"Enter experience:";
			cin>>experience;
		}
};
class C: public B{
	public:
		void setData()
		{
			B::setData();
			cout<<"Enter comp_name:";
			cin>>comp_name;
			cout<<"Enter address:";
			cin>>address;
		}
};
class D: public C{
	public:
		void setData()
		{
			C::setData();
			cout<<"Enter email:";
			cin>>email;
			cout<<"Enter contact:";
			cin>>contact;
		}
		public:
			void getData()
			{
				cout<<"id:"<<id<<endl;
				cout<<"name:"<<name<<endl;
				cout<<"role:"<<role<<endl;
				cout<<"salary:"<<salary<<endl;
				cout<<"experience:"<<experience<<endl;
				cout<<"comp_name:"<<comp_name<<endl;
				cout<<"address:"<<address<<endl;
				cout<<"email:"<<email<<endl;
				cout<<"contact:"<<contact<<endl;
			}
};
int main()
{
	D d1;
	d1.setData();
	d1.getData();
	return 0;
}

