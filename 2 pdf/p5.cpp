#include <iostream>
using namespace std;
char generateGrade(int maths, int phy, int chem) {
//    if (math > 80 && phy > 75 && chem > 72)
//        return 'A';
//    else if (math >= 60 && phy >= 55 && chem >= 50)
//        return 'B';
//    else if (math >= 40 && phy >= 35 && chem >= 35)
//        return 'C';
//    else
//        return 'D'; 
if (maths > 80 && phy > 75 && chem > 72) {
        return 'A';
    } else if (maths >= 60 && maths <= 80 && phy >= 55 && phy <= 75 && chem >= 50 && chem <= 72) {
        return 'B';
    } else if (maths >= 40 && maths < 60 && phy >= 35 && phy < 55 && chem >= 35 && chem < 50) {
        return 'C';
    } else {
        return 'D'; 
    }
}

int main() {
    int number;
	int maths;
	int physics;
	int chemistry;
	 char grade; 
	 
    cout << "Enter the number of students: ";
    cin >> number;

    for (int i = 0; i < number; ++i) 
	{
        cout << "Enter marks for student " << i + 1 << " (Maths Physics Chemistry): ";
        cin >> maths ;
        cin>> physics;
		cin >> chemistry;
		
		 cout << "\nGrades:\n";
		 
        grade = generateGrade(maths, physics, chemistry);
        cout << "Student " << i + 1 << ": " << grade << endl;
    }

    return 0;
}

