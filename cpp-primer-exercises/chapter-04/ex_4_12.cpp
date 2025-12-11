#include <iostream>

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.12 Example: Relational vs. Assignment Precedence
    
    int i = 5;
    int j = 10;
    
    // The expression to analyze is: i != j < 10
    
    // 1. Relational operators (like != and <) have HIGHER precedence than the assignment operator (=).
    // 2. The expression is evaluated as: (i != j) < 10
    
    // Evaluation Steps:
    // a. (i != j): (5 != 10) is TRUE, which converts to the integer 1.
    // b. (1 < 10): This is TRUE, which converts to the integer 1.
    // c. The overall result of the expression is 1.
    
    int result = i != j < 10;
    
    cout << "Given i=5 and j=10." << endl;
    cout << "The expression i != j < 10 evaluates as: (i != j) < 10" << endl;
    cout << "  - (5 != 10) evaluates to 1" << endl;
    cout << "  - (1 < 10) evaluates to 1" << endl;
    cout << "Final result: " << result << endl;
    
    // The expression is technically valid, but likely does not represent the programmer's intent.
    // The programmer likely intended: i != (j < 10) or (i != j) < 10

    return 0;
}