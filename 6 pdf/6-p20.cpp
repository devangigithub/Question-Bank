#include<iostream>
using namespace std;
class student {
	private:
		int stu_id;
		string stu_name;
		int stu_age;
		string stu_cource;
		string stu_email;
		string stu_college;
		
	public:
		void setData()
		{
			cout<<"Enter id:";
			cin>>this->stu_id;
			cout<<"Enter name:";
			cin>>this->stu_name;
			cout<<"Enter age:";
			cin>>this->stu_age;
			cout<<"Enter cource:";
			cin>>this->stu_cource;
			cout<<"Enter email:";
			cin>>this->stu_email;
			cout<<"Enter college:";
			cin>>this->stu_college;
		}
		void getData()
		{
			cout<<"id:"<<this->stu_id<<endl;
			cout<<"name:"<<this->stu_name<<endl;
			cout<<"age:"<<this->stu_age<<endl;
			cout<<"cource:"<<this->stu_cource<<endl;
			cout<<"email:"<<this->stu_email<<endl;
			cout<<"college:"<<this->stu_college<<endl;
		}
};
int main()
{
	int n;
	cout<<"Enter details:";
	cin>>n;
	student s;
	int i;
	for(i=0;i<n;i++)
	{
		s.setData();
		s.getData();	
	}
	return 0;
}
