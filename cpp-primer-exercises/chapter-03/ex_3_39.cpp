#include <iostream>
#include <string>
#include <cstring> // Required for strcmp()

using std::cout;
using std::endl;
using std::string;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.39 Example: C-String vs. std::string Comparison
    
    // ------------------------------------------
    // Part 1: Comparing std::string (Simple and Correct)
    // ------------------------------------------
    string s1("Hello");
    string s2("Hello");
    string s3("World");
    
    cout << "--- std::string Comparison ---" << endl;
    if (s1 == s2) {
        cout << "s1 and s2 are EQUAL." << endl;
    }
    if (s1 == s3) {
        cout << "s1 and s3 are EQUAL." << endl; // Will not print
    } else {
        cout << "s1 and s3 are NOT equal." << endl;
    }
    
    // ------------------------------------------
    // Part 2: Comparing C-Style Strings (Complex)
    // ------------------------------------------
    const char cs1[] = "C++";
    const char cs2[] = "C++";
    const char cs3[] = "Primer";
    
    // WARNING: cs1 == cs2 would compare the POINTERS (memory addresses), 
    // NOT the content, leading to incorrect results!
    
    cout << "\n--- C-style String Comparison ---" << endl;
    
    // Must use strcmp():
    // Returns 0 if strings are equal.
    // Returns < 0 if first string is lexicographically less than second.
    // Returns > 0 if first string is lexicographically greater than second.
    
    if (std::strcmp(cs1, cs2) == 0) {
        cout << "cs1 and cs2 are EQUAL (using strcmp())." << endl;
    }
    
    if (std::strcmp(cs1, cs3) < 0) {
        cout << "cs1 is LESS THAN cs3 (using strcmp())." << endl;
    }

    return 0;
}