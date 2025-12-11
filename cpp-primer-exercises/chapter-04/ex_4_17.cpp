#include <iostream>

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.17 Example: Prefix vs. Postfix Increment
    
    int i = 5;
    
    // ------------------------------------------
    // 1. Postfix Increment (i++)
    // ------------------------------------------
    cout << "--- Postfix (i++) ---" << endl;
    cout << "Before: i = " << i << endl;
    
    // Postfix returns a copy of the old value (5)
    int postfix_result = i++; 
    
    cout << "Result of assignment: " << postfix_result << " (Original value)" << endl;
    cout << "After operation: i = " << i << " (Value is now 6)" << endl;
    
    // ------------------------------------------
    // 2. Prefix Increment (++i)
    // ------------------------------------------
    i = 5; // Reset i
    
    cout << "\n--- Prefix (++i) ---" << endl;
    cout << "Before: i = " << i << endl;
    
    // Prefix increments i first (to 6), then returns the new value (6)
    int prefix_result = ++i; 
    
    cout << "Result of assignment: " << prefix_result << " (New value)" << endl;
    cout << "After operation: i = " << i << " (Value is now 6)" << endl;
    
    cout << "\nConclusion: Always prefer prefix (++i) when the result of the expression is not needed, as it avoids creating a temporary copy." << endl;

    return 0;
}