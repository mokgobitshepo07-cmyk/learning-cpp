#include <iostream>

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.36 Example: Cast to Influence Conversion
    
    int i = 5;
    double d = 3.5;
    
    cout << "Initial values: i=" << i << ", d=" << d << endl;
    
    // ------------------------------------------
    // a) Original: i *= d;
    // ------------------------------------------
    // 1. Implicit Conversion: d (double 3.5) is implicitly converted to int (3)
    //    before multiplication because the left operand of *= is an int (i).
    // 2. Calculation: i = i * 3  (i = 5 * 3 = 15)
    // Result: 15
    
    int i_original = i;
    i_original *= d;
    cout << "\n--- Original: i *= d ---" << endl;
    cout << "Result: i is 15 (Implicit conversion truncates d to 3)" << endl;
    
    // ------------------------------------------
    // b) Modified: i *= static_cast<int>(d);
    // ------------------------------------------
    // This explicitly performs the truncation, yielding the same result as the original.
    i = 5; // Reset i
    i *= static_cast<int>(d);
    cout << "\n--- Modified: i *= static_cast<int>(d) ---" << endl;
    cout << "Result: i is " << i << " (Explicit truncation of d to 3)" << endl;
    
    // ------------------------------------------
    // c) Alternate Goal (Floating Point):
    // If the goal was to perform floating-point multiplication and then assign
    // the TRUNCATED result back to i, we must use static_cast around the whole expression.
    // ------------------------------------------
    i = 5; // Reset i
    // 1. Calculation: 5 * 3.5 = 17.5 (double multiplication)
    // 2. Assignment: Cast 17.5 to int (17) and assign to i.
    i = static_cast<int>(i * d);
    cout << "\n--- Alternate Goal: i = static_cast<int>(i * d) ---" << endl;
    cout << "Result: i is " << i << " (Floating-point multiplication, then truncation)" << endl;
    
    return 0;
}