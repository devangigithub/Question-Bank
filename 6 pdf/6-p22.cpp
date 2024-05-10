#include<iostream>
using namespace std;
class hotel{
	private:
		int hotel_id;
		string hotel_name;
		string hotel_type;
		int hotel_staff_size;
		int hotel_room_size;
		int hotel_establish_year;
		string hotel_country;
		int hotel_rating;
		string hotel_website;
		public:
			void setData()
			{
				cout<<"Enter id:";
				cin>>this->hotel_id;
				cout<<"Enter name:";
				cin>>this->hotel_name;
				cout<<"Enter type:";
				cin>>this->hotel_type;
				cout<<"Enter staff size:";
				cin>>this->hotel_staff_size;
				cout<<"Enter room size:";
				cin>>this->hotel_room_size;
				cout<<"Enter establish year:";
				cin>>this->hotel_establish_year;
				cout<<"Enter country:";
				cin>>this->hotel_country;
				cout<<"Enter rating:";
				cin>>this->hotel_rating;
				cout<<"Enter website:";
				cin>>this->hotel_website;
			}
			public:
				void getData()
				{
					cout<<"id:"<<this->hotel_id<<endl;
					cout<<"name:"<<this->hotel_name<<endl;
					cout<<"type:"<<this->hotel_type<<endl;
					cout<<"staff size:"<<this->hotel_staff_size<<endl;
					cout<<"room size:"<<this->hotel_room_size<<endl;
					cout<<"establish year:"<<this->hotel_establish_year<<endl;
					cout<<"country:"<<this->hotel_country<<endl;
					cout<<"rating:"<<this->hotel_rating<<endl;
					cout<<"website:"<<this->hotel_website<<endl;
				}
};
int main()
{
	hotel h;
	int n;
	cout<<"Enter detail:";
	cin>>n;
	int i;
	for(i=0;i<n;i++)
	{
		h.setData();
		h.getData();
	}
	return 0;
}
