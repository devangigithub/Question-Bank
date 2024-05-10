#include<iostream>
using namespace std;
class Addition
{
	private:
		int i;
		public:
			void setData(int i)
			{
				this->i=i;
			}
			Addition operator+(Addition n)
			{
				Addition sum;
				sum.i=this->i+n.i;
				return sum;
			}
			void getAdd()
			{
				cout<<"Addition is:"<<i<<endl;
			}
};
class Substraction:public Addition
{
	private:
		int i1;
		public:
			void setData1(int i1)
			{
				this->i1=i1;
			}
			Substraction operator-(Substraction n1)
			{
				Substraction sum1;
				sum1.i1=this->i1-n1.i1;
				return sum1;
			}
			void getsub()
			{
				cout<<"Substraction is:"<<i1<<endl;
			}
};
class Multiplication:public Substraction
{
	private:
		int i2;
		public:
			void setData2(int i2)
			{
				this->i2=i2;
			}
			Multiplication operator*(Multiplication n2)
			{
				Multiplication sum2;
				sum2.i2=this->i2*n2.i2;
				return sum2;
			}
			void getmul()
			{
				cout<<"Multiplication is:"<<i2<<endl;
			}
};
class Division:public Multiplication
{
	private:
		int i3;
		public:
			void setData(int i3)
			{
				this->i3=i3;
			}
			Division operator/(Division n3)
			{
				Division sum3;
				sum3.i3=this->i3/n3.i3;
				return sum3;
			}
			void getdiv()
			{
				cout<<"Division is:"<<i3<<endl;
			}
};
int main()
{
	Addition a1,a2,a3;
	a1.setData(10);
	a2.setData(20);
	a3=a1+a2;
	a3.getAdd();
	Substraction a4,a5,a6;
	a4.setData1(10);
	a5.setData1(20);
	a6.getsub();
	Multiplication a7,a8,a9;
	a7.setData2(10);
	a8.setData2(20);
	a9.getmul();
	Division a10,a11,a12;
	a10.setData(10);
	a11.setData(20);
	a12.getdiv();
	return 0;
}
