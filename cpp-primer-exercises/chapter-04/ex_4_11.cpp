#include <iostream>

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.11 Example: Relational Operator Chain
    
    int a = 20, b = 15, c = 10, d = 5;
    
    // The expression to analyze is often: a > b > c
    // In math: this means (a > b) AND (b > c).
    // In C++: this means ((a > b) > c), due to left-associativity.
    
    // Step-by-step evaluation of: (a > b) > c
    // 1. (a > b): (20 > 15) evaluates to TRUE (or 1).
    // 2. (1 > c): (1 > 10) evaluates to FALSE (or 0).
    int result = a > b > c; 
    
    // Evaluate a chain using the logical AND operator (which is safer for this intent)
    int correct_intent = (a > b) && (b > c); 
    
    cout << "Given a=20, b=15, c=10, d=5" << endl;
    cout << "--- Relational Chain Analysis ---" << endl;
    
    cout << "a) (a > b > c) evaluates to: " << result << endl;
    cout << "   - Reason: It evaluates as ((20 > 15) > 10) -> (1 > 10) -> 0" << endl;
    
    cout << "b) (a > b) && (b > c) evaluates to: " << correct_intent << endl;
    cout << "   - Reason: It evaluates as (TRUE && TRUE) -> 1 (Correct intent)" << endl;
    
    // Analyze a full logical chain
    int full_chain = a > b && b > c && c > d;
    
    cout << "c) a > b && b > c && c > d evaluates to: " << full_chain << endl;
    cout << "   - Reason: Logical AND has lower precedence, so all comparisons are done first." << endl;


    return 0;
}