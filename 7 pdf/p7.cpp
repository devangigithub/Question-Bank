#include <iostream>
#include <string>
using namespace std;

class FindAndReplace {
	public:
	
    static string process(const string& message) {
        string result = message;
        for (char& c : result) {
            if (c == Find) {
                c = Replace;
            }
        }
        return result;
    }
};

int main() {
    
    string message = "Hello, World!";
    cout << "Original message: " << message << endl;

   	cout << "After replacing 'l' with 'x': ";
    cout << FindAndReplace<'l', 'x'>::process(message) << endl;

   
    cout << "After replacing 'o' with 'y': ";
    cout << FindAndReplace<'o', 'y'>::process(message) << endl;

    return 0;
}

