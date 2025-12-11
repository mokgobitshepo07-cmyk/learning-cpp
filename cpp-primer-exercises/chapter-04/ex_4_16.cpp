#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.16 Example: Assignment and Precedence
    
    int i = 5, j = 10;
    
    // a) if (p = getPtr() != 0)
    // Assume getPtr() returns a non-null int*
    
    // 1. Relational operator (!=) has HIGHER precedence than assignment (=).
    // 2. The expression is evaluated as: p = (getPtr() != 0)
    // 3. The comparison (getPtr() != 0) yields a bool (true or false, 1 or 0).
    // 4. This bool (int) is then assigned to the pointer p (int*).
    // This is INVALID in standard C++ unless getPtr() returns a bool.
    // If p is an int*, this causes a COMPILER ERROR (or a warning/error depending on the cast).
    // We will demonstrate the precedence structure safely:
    
    cout << "--- Statement a) p = getPtr() != 0 ---" << endl;
    cout << "Precedence groups it as: p = (getPtr() != 0)." << endl;
    cout << "If p is a pointer, this is an ERROR (cannot assign bool/int to pointer)." << endl;
    
    // b) if (i = j)
    // 1. Assignment (=) is evaluated. i is assigned the value of j (10).
    // 2. The result of the assignment (10) is converted to bool (TRUE).
    // 3. This is VALID, but often a typo for if (i == j).
    
    cout << "\n--- Statement b) if (i = j) ---" << endl;
    i = 5; // Reset i
    if (i = j) {
        cout << "Valid: i is assigned " << i << ", condition is TRUE." << endl;
    } else {
        cout << "Invalid." << endl;
    }
    
    // c) if (!s.empty() && s[0] == '_')
    // This expression is a valid use of logical AND (&&) with short-circuiting.
    // The comparison (s[0] == '_') is only evaluated if !s.empty() is true.
    // This is CORRECT and SAFE.
    
    cout << "\n--- Statement c) if (!s.empty() && s[0] == '_') ---" << endl;
    string s = "_hello";
    if (!s.empty() && s[0] == '_') {
        cout << "Valid and Safe: The logical AND requires checking both conditions." << endl;
    } else {
        cout << "Invalid." << endl;
    }

    return 0;
}