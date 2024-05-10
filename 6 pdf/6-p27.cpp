#include<iostream>
using namespace std;
class rbi{
	public:
	int am;
		dispa(){
			cout<<"ENter the AMOUNT = ";
			cin>>am;
		}
};
class sbi : public rbi{
		int a;
		public:
			dispb()
			{
				cout<<"ENTER THE RATE IF INTREST = ";
				cin>>a;				
				cout<<"amount after rate of intrest =  "<< (am * a)/100 <<endl;	
			}
};
class bob: public rbi{
		int b;
		public:
			dispc()
			{
				cout<<"ENTER THE RATE IF INTREST =";
				cin>>b;
				cout<<"amount after rate of intrest = "<<(am * b)/100<<endl;
			}
};
class icici : public rbi{
		int c;
		public:
			dispd()
			{
				cout<<"ENTER THE RATE IF INTREST = ";				
				cin>>c;
				cout<<"amount after rate of intrest = "<<(am/100)*c<<endl;
			}
};

int main(){
	sbi s1;
	bob b1;
	icici i1;
	
	s1.dispa();
	s1.dispb();
	
	b1.dispa();
	b1.dispc();
	
	i1.dispa();
	i1.dispd();
	return 0;
}

