#include<iostream>
using namespace std;
class Geometry_problems
{
	public:
		
	const float  pi=3.14159;

	float  Area_of_Circle(int r )
	{
		return pi*r*r;
	}
	float  Perimeter_of_Circle(int r )
	{
		return 2*pi*r;
	}
	int Area_of_Square(int a)
	{
		return a*a;
	}
	int Area_of_Rectangle(int length,int width)
	{
		return length * width;
	}
	int Area_of_Triangle(int height,int base)
	{
		return 0.5*height*base;
	}
	float  Area_of_Sphere(int r)
	{
		return 4*pi*r*r;
	}
};

int main()
{
	Geometry_problems geme;
	
	int r;
	int height;
	int width;
	int a;
	int length;
	int base;
	
	cout<<"Enter radius of the circle: ";
	cin>>r;
	cout<<"Area of the circle: "<<geme.Area_of_Circle(r)<<endl<<endl;
	
	cout<<"Enter radius of the circle: ";
	cin>>r;
	cout<<"Perimeter of the circle: "<<geme.Perimeter_of_Circle(r)<<endl<<endl;
	
	cout<<"Enter side of the square: ";
	cin>>a;
	cout<<"Area of the square: "<<geme.Area_of_Square(a)<<endl<<endl;
	
	cout<<"Enter length of the rectangle: ";
	cin>>length;
	cout<<"Enter width of the rectangle: ";
	cin>>width;
	cout<<"Area of the rectangle: "<<geme.Area_of_Rectangle(length,width)<<endl<<endl;
	
	cout<<"Enter base of the triangle: ";
	cin>>base;
	cout<<"Enter height of the triangle: ";
	cin>>height;
	cout<<"Area of the triangle: "<<geme.Area_of_Triangle(height,base)<<endl<<endl;
	
	cout<<"Enter radius of the sphere: ";
	cin>>r;
	cout<<"Volume of the sphere: "<<geme.Area_of_Sphere(r)<<endl<<endl;
	
	return 0;
}
	
