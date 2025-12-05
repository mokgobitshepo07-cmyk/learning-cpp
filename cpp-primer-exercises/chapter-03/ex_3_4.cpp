#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.4 Example: String Comparison
    
    string s1, s2;
    
    cout << "Enter two words to compare their length and content:" << endl;
    cout << "Word 1: ";
    cin >> s1;
    cout << "Word 2: ";
    cin >> s2;
    
    cout << "\n--- Comparison Results ---" << endl;
    
    // a) Compare the content of the strings
    if (s1 == s2) {
        cout << "1. The words are EQUAL." << endl;
    } else if (s1 > s2) {
        // Lexicographical comparison: 's1' comes later in the dictionary than 's2'
        cout << "1. The words are NOT equal. '" << s1 << "' is greater (comes after) '" << s2 << "'." << endl;
    } else { // s1 < s2
        // Lexicographical comparison: 's1' comes earlier in the dictionary than 's2'
        cout << "1. The words are NOT equal. '" << s1 << "' is less (comes before) '" << s2 << "'." << endl;
    }
    
    // b) Compare the lengths of the strings
    if (s1.size() == s2.size()) {
        cout << "2. The words have the SAME length: " << s1.size() << endl;
    } else if (s1.size() > s2.size()) {
        cout << "2. The LONGER word is '" << s1 << "' (Length: " << s1.size() << ")" << endl;
    } else { // s1.size() < s2.size()
        cout << "2. The LONGER word is '" << s2 << "' (Length: " << s2.size() << ")" << endl;
    }

    return 0;
}