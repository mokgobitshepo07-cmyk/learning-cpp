#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.9 Example: Subscripting on Empty String
    
    // 1. Define an empty string. Its size() is 0.
    string s; 
    
    // 2. THIS IS THE ERROR: Attempting to access and assign to an element 
    //    that does not exist (index 0). 
    // s[0] = 'H'; // NOTE: This line is commented out because it causes UNDEFINED BEHAVIOR!
    
    cout << "Original string size: " << s.size() << endl;

    // The proper way to add an element:
    s = "Hello";
    s[0] = 'h'; // OK: The string now has elements (size 5).

    cout << "Modified string size: " << s.size() << endl;
    cout << "Modified string content: " << s << endl;

    return 0;
}