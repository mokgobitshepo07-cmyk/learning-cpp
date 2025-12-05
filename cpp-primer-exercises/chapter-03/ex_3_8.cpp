#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.8 Example: Traditional While Loop and Subscripting
    
    string s = "Traditional loop traversal is powerful!";
    
    cout << "Original string: " << s << endl;
    
    // Initialize an index variable
    decltype(s.size()) i = 0;
    
    // Loop while the index is less than the string's size
    while (i < s.size()) {
        
        // Use the subscript operator ([]) to access and modify the character
        s[i] = 'T'; 
        
        // Increment the index to move to the next character
        ++i; 
    }
    
    cout << "Modified string: " << s << endl;
    
    // The exercise also often asks for the 'for' loop equivalent:
    /*
    for (decltype(s.size()) j = 0; j < s.size(); ++j) {
        s[j] = 'F'; // This would reset all characters to 'F'
    }
    */

    return 0;
}