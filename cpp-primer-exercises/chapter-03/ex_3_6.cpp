#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.6 Example: Using Range-for to Process a String
    
    string s = "Hello World! C++ Primer.";
    
    cout << "Original string: " << s << endl;
    
    // Use the range-for loop to iterate over the string.
    // The '&c' is crucial: using a reference allows us to MODIFY the character
    // in the string directly, rather than just reading a copy.
    for (char &c : s) {
        // Replace every character with a specific character (e.g., 'X')
        c = 'X'; 
    }
    
    cout << "Modified string: " << s << endl;

    return 0;
}