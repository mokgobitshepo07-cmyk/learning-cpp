#include <iostream>

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.3 Example: Order of Evaluation
    
    // The main rule reinforced here is: The order of evaluation for most 
    // operands is UNspecified. If an object is written to more than once 
    // without an intervening sequence point (like a semicolon), the result is 
    // UNDEFINED BEHAVIOR.
    
    int i = 5;
    int j = 10;
    
    // BAD PRACTICE / UNDEFINED BEHAVIOR (Don't do this!):
    // int result = (i = j) + ++i; 
    
    // GOOD PRACTICE: Use separate statements to ensure clear order and avoid undefined behavior.
    
    cout << "Initial i: " << i << endl;
    
    // Step 1: Assignment
    i = j; // i is now 10
    
    // Step 2: Prefix Increment
    ++i; // i is now 11
    
    // Step 3: Calculation (assuming we used the comma operator or similar)
    int result = i + j; 
    
    cout << "\nAfter safe, sequential operations:" << endl;
    cout << "Final i: " << i << endl;
    cout << "Result of i + j: " << result << endl;
    
    // The key answer for this exercise is: The order of evaluation of most 
    // operators' operands is unspecified, except for logical AND (&&), 
    // logical OR (||), the conditional operator (?:), and the comma operator (,).
    // Always use separate statements when modifying a variable to avoid UB.

    return 0;
}