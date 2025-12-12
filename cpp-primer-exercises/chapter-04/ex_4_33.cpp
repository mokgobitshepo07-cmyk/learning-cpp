#include <iostream>

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.33 Example: Comma Operator and Conditional Operator
    
    int x = 10, y = 10;
    bool some_val = true;
    
    cout << "Initial values: x=" << x << ", y=" << y << endl;
    
    // The expression to analyze: some_val ? ++x, ++y : --x, --y
    // Grouping by precedence: (some_val ? (++x, ++y) : (--x)), --y
    
    // Step 1: Execute the conditional part
    // Since some_val is TRUE: (++x, ++y) is executed. x becomes 11, y becomes 11.
    // The conditional operator returns the value of the rightmost operand in the sequence (11).
    
    // Step 2: Execute the outer comma operator
    // The conditional result (11) is discarded, and the right operand (--y) is executed.
    // y is decremented. y becomes 10. The entire expression returns 10.
    
    int result = some_val ? (++x, ++y) : (--x, --y);
    
    cout << "\n--- Result of (some_val ? ++x, ++y : --x), --y ---" << endl;
    cout << "Final x: " << x << endl; // Should be 11
    cout << "Final y: " << y << endl; // Should be 10 (Incremented then immediately decremented)
    cout << "Expression result (value of --y): " << result << endl;
    
    // To achieve the likely INTENDED result, parentheses are needed:
    x = 10; y = 10;
    cout << "\n--- Intended Result (using parentheses) ---" << endl;
    if (some_val) {
        ++x, ++y;
    } else {
        --x, --y;
    }
    cout << "Final x: " << x << " (Correctly 11)" << endl;
    cout << "Final y: " << y << " (Correctly 11)" << endl;

    return 0;
}