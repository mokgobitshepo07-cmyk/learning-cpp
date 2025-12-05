#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.7 Example: Range-for and References
    
    string s = "C++ Primer Exercises Are Fun!";
    
    cout << "Original string: " << s << endl;
    
    // The key distinction: 
    // If you used 'char c : s', you would be modifying a COPY of each character, 
    // and the original string 's' would NOT change.
    
    // By using 'char &c : s', we use a REFERENCE to the character.
    // Changes made to 'c' directly modify the element in the string 's'.
    for (char &c : s) {
        // Change the character to a capital 'Z'
        c = 'Z'; 
    }
    
    cout << "Modified string: " << s << endl;

    return 0;
}