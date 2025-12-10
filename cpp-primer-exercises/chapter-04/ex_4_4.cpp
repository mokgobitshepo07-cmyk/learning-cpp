#include <iostream>

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.4 Example: Complex Precedence
    
    // Expression to analyze: 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2
    
    // 1. Identify highest precedence group (*, /, %) and evaluate left-to-right.
    //    a. 12 / 3 = 4
    //    b. 4 * 4 = 16
    //    c. 5 * 15 = 75
    //    d. 24 % 4 = 0 (24 divided by 4 leaves a remainder of 0)
    //    e. 0 / 2 = 0
    
    // 2. The expression simplifies to: 16 + 75 + 0
    
    // 3. Addition (+) has lower precedence and is evaluated left-to-right.
    //    f. 16 + 75 = 91
    //    g. 91 + 0 = 91
    
    int result = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
    
    cout << "The expression 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 evaluates to: " << result << endl;

    return 0;
}