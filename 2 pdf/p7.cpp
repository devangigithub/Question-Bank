#include <iostream>
using namespace std;

const float pi=3.14159;

int main() {
    char choice;
    float r;

    do {
        cout<<endl<<"Circle Calculator"<<endl;
        cout<<"1. Calculate Area"<<endl;
        cout<<"2. Calculate Perimeter"<<endl;
        cout<<"3. Convert Radius to Diameter"<<endl;
        cout<<"4. Exit" << endl;
        
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice) {
            case '1':
            	
                cout<<"Enter radius of the circle: ";
                cin>>r;
                cout<<"Area of the circle: "<<pi*r*r<<endl;
                
                break;
                
            case '2':
            	
                cout<<"Enter radius of the circle: ";
                cin>>r;
                cout<<"Perimeter of the circle: "<<2*pi*r<<endl;
                
                break;
                
            case '3':
                cout<<"Enter radius of the circle: ";
                cin>>r;
                cout<<"Diameter of the circle: " <<2*r<<endl;
                
                break;
                
            case '4':
            	
                cout<<"Exiting Circle Calculator. Goodbye!!!!" <<endl;
                break;
                
            default:
            	
                cout<<"Invalid choice....." << endl;
        }
    } while (choice != '4');

    return 0;
}

