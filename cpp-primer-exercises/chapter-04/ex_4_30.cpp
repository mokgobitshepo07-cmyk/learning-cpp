#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.30 Example: sizeof Precedence
    
    int x = 10;
    int *p = &x; 
    
    // ------------------------------------------
    // a) sizeof x + y
    // ------------------------------------------
    // Assuming 'y' is also an integer variable (e.g., y=5).
    // Precedence groups it as: (sizeof x) + y
    // (sizeof x) is evaluated first, then the result is added to y.
    
    int y = 5;
    size_t a_result = sizeof x + y; // Equivalent to (sizeof(int)) + y
    cout << "--- Expression a) sizeof x + y ---" << endl;
    cout << "Evaluates as: (sizeof(int)) + y" << endl;
    cout << "Result (e.g., 4 + 5): " << a_result << endl;
    
    // ------------------------------------------
    // b) sizeof (p->mem[i])
    // ------------------------------------------
    // This assumes 'p' points to a struct/class. Parentheses make it clear.
    // The compiler determines the size of the type that p->mem[i] would return.
    cout << "\n--- Expression b) sizeof (p->mem[i]) ---" << endl;
    cout << "Evaluates as: sizeof(type of p->mem[i]). Clear due to parentheses." << endl;
    
    // ------------------------------------------
    // c) sizeof (a < b ? c : d)
    // ------------------------------------------
    // The expression inside the parentheses is evaluated to determine its RESULT TYPE, 
    // but the conditional itself is NOT executed.
    // The result is the size of the common type returned by the conditional operator.
    int c = 10, d = 20;
    size_t c_result = sizeof (x < y ? c : d); // Result type is int (size is sizeof(int))
    
    cout << "\n--- Expression c) sizeof (a < b ? c : d) ---" << endl;
    cout << "Evaluates as: sizeof(int). The condition is NOT run." << endl;
    cout << "Result (sizeof(int)): " << c_result << endl; 
    
    // ------------------------------------------
    // d) sizeof a < b ? c : d
    // ------------------------------------------
    // Precedence Order: sizeof (High) > Relational (<) > Conditional (?:) (Lowest)
    // Evaluation: ((sizeof a) < b) ? c : d
    // (sizeof a) is typically 4. 
    // (4 < 5) is TRUE. The result is 'c' (10).
    size_t d_result = sizeof x < y ? c : d; // Equivalent to ((sizeof(int)) < 5) ? 10 : 20
    
    cout << "\n--- Expression d) sizeof a < b ? c : d ---" << endl;
    cout << "Evaluates as: ((sizeof a) < b) ? c : d" << endl;
    cout << "Result (TRUE ? 10 : 20): " << d_result << endl;

    return 0;
}