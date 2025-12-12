#include <iostream>

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.34 Example: Type Casts
    
    int i = 5, j = 2;
    double d = 3.5;
    
    // Original (Integer Division)
    // The result is an integer (2), then assigned to a double (2.0)
    double original_result = i / j; 
    
    // ------------------------------------------
    // a) Using static_cast (Modern C++ preference)
    // ------------------------------------------
    // Cast 'i' to double BEFORE division.
    // The expression becomes: (double)i / j (Promotion: j is promoted to double).
    // Result: 5.0 / 2.0 = 2.5
    double static_cast_result = static_cast<double>(i) / j; 

    // ------------------------------------------
    // b) Using C-style cast (Simulates static_cast or const_cast)
    // ------------------------------------------
    // Similar to static_cast here, but less restrictive than C++ named casts.
    double c_style_result = (double)i / j; 

    // ------------------------------------------
    // c) Functional cast (Equivalent to C-style cast for non-user-defined types)
    // ------------------------------------------
    // Also results in floating-point division.
    double functional_result = double(i) / j;

    cout << "--- Analysis of Casts for Division ---" << endl;
    cout << "Expression: i / j (5 / 2)" << endl;
    cout << "Original (Integer Div): " << original_result << endl;
    cout << "static_cast result:     " << static_cast_result << endl;
    cout << "C-style cast result:    " << c_style_result << endl;
    cout << "Functional cast result: " << functional_result << endl;

    cout << "\nConclusion: Using C++ named casts (static_cast) is the preferred way to" << endl;
    cout << "explicitly perform type conversions as they are easier to spot and restrict " << endl;
    cout << "the type of conversion allowed." << endl;

    return 0;
}