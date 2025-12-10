#include <iostream>

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.1 Example: Precedence and Associativity
    
    // Expression to analyze: 5 + 10 * 20 / 2
    
    // 1. Multiplication (*) and Division (/) have higher precedence than Addition (+).
    // 2. * and / have the same precedence, so they are evaluated left-to-right (associativity).
    
    // Evaluation Steps:
    // a. 10 * 20 = 200
    // b. 200 / 2 = 100
    // c. 5 + 100 = 105
    
    int result = 5 + 10 * 20 / 2;
    
    cout << "The expression 5 + 10 * 20 / 2 evaluates to: " << result << endl;

    return 0;
}