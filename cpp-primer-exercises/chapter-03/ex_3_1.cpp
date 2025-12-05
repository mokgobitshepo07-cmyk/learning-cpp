#include <iostream>
#include <string>

// Use declarations to bring names from the std namespace into scope
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.1 Example: Using Declarations
    
    // 1. Declare two strings using the type alias 'string'
    string s1, s2; 
    
    // 2. Prompt the user for input using 'cout'
    cout << "Enter two words to compare (separated by a space): ";
    
    // 3. Read the input into the strings using 'cin'
    cin >> s1 >> s2;
    
    // 4. Compare the strings and print the result
    if (s1 == s2) {
        cout << "The words are equal." << endl;
    } else {
        cout << "The words are NOT equal." << endl;
    }
    
    return 0;
}