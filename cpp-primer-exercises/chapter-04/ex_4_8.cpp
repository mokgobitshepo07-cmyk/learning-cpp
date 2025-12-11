#include <iostream>

using std::cout;
using std::endl;

// A simple function to demonstrate when the operand is evaluated
bool is_true(int i) {
    cout << "  -> Evaluating operand: " << i << endl;
    return i > 0;
}

int main() {
    // C++ Primer, Chapter 4, Exercise 4.8 Example: Logical Operators (&&, ||)
    
    // The key difference is short-circuit evaluation.
    // In: A && B, B is only evaluated if A is true.
    // In: A || B, B is only evaluated if A is false.

    int x = 10;
    int y = 0;
    bool result;
    
    cout << "--- Testing Logical AND (&&) ---" << endl;
    
    // In the expression below:
    // 1. is_true(x) is evaluated first (returns true).
    // 2. Since the first operand is TRUE, the second operand (is_true(y)) MUST be 
    //    evaluated to determine the final result.
    result = is_true(x) && is_true(y); 
    
    cout << "Result of is_true(x) && is_true(y): " << result << endl;
    
    // ------------------------------------------------------------------
    
    cout << "\n--- Testing Short-Circuit with Logical AND (&&) ---" << endl;
    
    // In the expression below:
    // 1. is_true(y) is evaluated first (returns false).
    // 2. Since the first operand is FALSE, the whole expression is guaranteed to be 
    //    false. The second operand (is_true(x)) is NOT evaluated.
    result = is_true(y) && is_true(x); 
    
    cout << "Result of is_true(y) && is_true(x): " << result << endl;

    return 0;
}