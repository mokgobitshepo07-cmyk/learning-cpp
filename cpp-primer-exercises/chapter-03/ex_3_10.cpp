#include <iostream>
#include <string>
#include <cctype> // Required for ispunct()

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.10 Example: Removing Punctuation
    
    string s = "Hello, World! This is C++ Primer.";
    string result_s;
    
    cout << "Original string: " << s << endl;
    
    // Iterate over the characters in the original string
    for (char c : s) {
        // The ispunct function returns true if c is a punctuation character
        if (!ispunct(c)) {
            // If it is NOT punctuation, add it to the result string
            result_s += c; 
        }
    }
    
    cout << "String without punctuation: " << result_s << endl;

    return 0;
}