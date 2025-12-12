#include <iostream>

using std::cout;
using std::endl;
using std::cin; // <-- ADD THIS LINE

int main() {
    // C++ Primer, Chapter 5, Exercise 5.7 Example: Correcting If/Else Errors
    
    int ival = 10;
    int ival2 = 5;
    
    cout << "Initial values: ival=" << ival << ", ival2=" << ival2 << endl;
    
    // ------------------------------------------
    // a) Original Flawed Code (Missing Brackets/Semicolon Error)
    // if (ival1 != ival2)
    //     ival1 = ival2;
    // else
    //     ival1 = ival2 = 0;
    // ------------------------------------------
    // NOTE: If the first two lines had a semicolon, the 'else' would be invalid. 
    // Assuming the original intended to use a complex statement like an assignment 
    // that might be confused with a declaration:
    
    // Corrected Code (Standard if/else):
    cout << "\n--- Correction a) ---" << endl;
    if (ival != ival2) {
        ival = ival2; // ival becomes 5
        cout << "a) ival != ival2: ival is now " << ival << endl;
    } else {
        ival = ival2 = 0;
        cout << "a) ival == ival2: ival is now " << ival << endl;
    }

    // ------------------------------------------
    // b) Original Flawed Code (Dangling Else Error)
    // if (ival < minval)
    //     if (ival != maxval)
    //         ival = minval;
    // else // ERROR: This else associates with the nearest inner 'if' (ival != maxval)
    //     ival = maxval;
    // ------------------------------------------
    // Problem: The 'else' belongs to the inner 'if'. To make it belong to the outer 'if' 
    // (the likely intent), brackets are needed around the inner if-statement.
    
    int minval = 0, maxval = 100;
    ival = 101; // Set ival > maxval to test the 'else' block
    
    cout << "\n--- Correction b) ---" << endl;
    if (ival < minval) { // Condition is false
        if (ival != maxval)
            ival = minval;
    } else { // This is where the 'else' was likely intended, but originally bound to the inner 'if'
        ival = maxval; // ival becomes 100
        cout << "b) ival >= minval: ival is now " << ival << endl;
    }
    
    // ------------------------------------------
    // c) Original Flawed Code (Assignment vs. Equality)
    // if (i = j) // LOGICAL ERROR: This assigns j to i, then evaluates i (non-zero is true)
    //     // ... do something
    // ------------------------------------------
    // Correction: Use equality operator (==) instead of assignment (=)
    
    int i = 0, j = 0;
    cout << "\n--- Correction c) ---" << endl;
    if (i == j) { // Correct: Compares if i is equal to j
        cout << "c) i == j is TRUE" << endl;
    }
    
    // ------------------------------------------
    // d) Original Flawed Code (Scope of Declaration)
    // if (cin >> ival)
    //     int val = ival; // 'val' is declared and only visible in this if-branch
    // ------------------------------------------
    // Correction: If 'val' is needed outside the 'if' block, it must be declared outside.
    
    int val = 0; // Declare val outside the if statement
    cout << "\n--- Correction d) ---" << endl;
    if (cin >> ival) {
        val = ival; // Assign to the externally defined val
        cout << "d) Input successful. val is now " << val << endl;
    } else {
        cout << "d) Input failed. val remains " << val << endl;
    }
    
    // Note: To test 'd', you must provide input and then trigger EOF.

    return 0;
}