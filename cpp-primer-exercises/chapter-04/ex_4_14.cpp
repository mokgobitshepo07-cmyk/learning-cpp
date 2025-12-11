#include <iostream>

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.14 Example: L-value and Assignment Validity
    
    int i = 5;
    
    cout << "--- Statement a) if (42 = i) ---" << endl;
    // The expression to analyze is: if (42 = i)
    // 1. 42 is a literal (r-value) and CANNOT be assigned to.
    // 2. This statement is INVALID and will cause a COMPILER ERROR.
    // if (42 = i) { } // Error: expression is not assignable
    
    cout << "Status: Invalid. 42 is a literal (r-value) and cannot be assigned to." << endl;
    
    // The programmer likely meant: if (42 == i)
    if (42 == i) {
        cout << "Correct comparison: 42 == i is TRUE." << endl;
    } else {
        cout << "Correct comparison: 42 == i is FALSE." << endl;
    }
    
    // -------------------------------------------------------------
    
    cout << "\n--- Statement b) if (i = 42) ---" << endl;
    // The expression to analyze is: if (i = 42)
    // 1. i is a variable (l-value) and CAN be assigned to.
    // 2. The assignment returns the value of the assignment (42).
    // 3. 42 is converted to bool TRUE, so the if statement IS entered.
    // 4. This statement is VALID, but often not what the programmer intended!
    
    if (i = 42) {
        cout << "Status: Valid, but dangerous. i is assigned 42, and the condition is TRUE." << endl;
        cout << "New value of i: " << i << endl;
    } else {
        cout << "This will not print." << endl;
    }

    return 0;
}