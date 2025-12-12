#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.23 Example: Precedence of + vs. ? :
    
    string s = "word";
    
    // --------------------------------------------------------
    // INCORRECT VERSION (due to precedence):
    // string p1 = s + s[s.size() - 1] == 's' ? "" : "s";
    // This evaluates as: (s + (s[s.size() - 1] == 's')) ? "" : "s" - which is incorrect.
    // The actual precedence is: ((s + s[s.size() - 1]) == 's') ? "" : "s" - also incorrect intent.
    // The expression attempts to compare a string with a char, then assigns the result of the conditional.
    // --------------------------------------------------------

    // CORRECT VERSION (Uses parentheses to force the intended order of operations):
    // 1. Evaluate the conditional operator first to get the plural suffix ("s" or "").
    // 2. Then, concatenate the original string 's' with the chosen suffix.
    string p2 = s + (s[s.size() - 1] == 's' ? "" : "s");
    
    cout << "Original string: " << s << endl;
    cout << "Corrected Pluralization (p2): " << p2 << endl;
    
    s = "words";
    string p3 = s + (s[s.size() - 1] == 's' ? "" : "s");
    cout << "Original string: " << s << endl;
    cout << "Corrected Pluralization (p3): " << p3 << endl;
    
    // Note: The conditional operator (?:) has a VERY LOW precedence, 
    // lower than addition/concatenation (+), requiring parentheses if it's not the 
    // outermost expression.

    return 0;
}