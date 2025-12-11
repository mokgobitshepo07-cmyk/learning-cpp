#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.19 Example: Precedence Analysis
    
    vector<int> ivec = {10, 20, 30, 40};
    int *ptr = ivec.data(); // Pointer to the start of the vector (value 10)
    int ival = 20;

    // The variable 'ptr' has the address of ivec[0].
    
    // ------------------------------------------
    // a) ptr != 0 && *ptr++
    // ------------------------------------------
    // Precedence Order:
    // 1. Dereference/Postfix Increment (*, ++) (Highest)
    // 2. Inequality (!=)
    // 3. Logical AND (&&) (Lowest)
    
    // Evaluation Steps:
    // A. ptr != 0: TRUE (1)
    // B. *ptr++: Returns the value 10, then increments ptr to point to 20.
    // C. Logical AND: TRUE && (10 is converted to TRUE). Result is TRUE (1).
    // D. Side Effect: ptr now points to 20.
    
    ptr = ivec.data(); // Reset pointer
    bool a_result = ptr != 0 && *ptr++; 

    cout << "--- Expression a) ptr != 0 && *ptr++ ---" << endl;
    cout << "Result: " << a_result << " (TRUE). Side effect: ptr now points to 20." << endl;
    cout << "  (ptr != 0) is evaluated first due to short-circuiting guarantee on ptr != 0." << endl;
    
    // ------------------------------------------
    // b) ival++ && ival
    // ------------------------------------------
    // Precedence Order: Postfix Increment (++) is high, but the expression is undefined behavior (UB).
    // The value of 'ival' is modified and accessed within the same expression without a sequence point.
    // However, if forced to evaluate:
    // 1. ival++: Returns 20 (converted to TRUE), then ival becomes 21.
    // 2. ival (second operand) is evaluated: 21 (converted to TRUE).
    // 3. TRUE && TRUE = TRUE.
    
    ival = 20; // Reset ival
    bool b_result;
    // b_result = ival++ && ival; // UNDEFINED BEHAVIOR: ival is modified and accessed in the same expression.
    
    cout << "\n--- Expression b) ival++ && ival ---" << endl;
    cout << "Result: UNDEFINED BEHAVIOR. ival is modified and accessed without a sequence point." << endl;
    
    // ------------------------------------------
    // c) *ptr++ == ival
    // ------------------------------------------
    // Precedence Order:
    // 1. Dereference/Postfix Increment (*, ++) (Highest)
    // 2. Equality (==) (Lowest)
    
    // Evaluation Steps: (ptr reset to 10, ival is still 20)
    // A. *ptr++: Returns 10, then increments ptr to point to 20.
    // B. (10 == ival): (10 == 20) is FALSE (0).
    // C. Side Effect: ptr now points to 20.
    
    ptr = ivec.data(); // Reset pointer
    ival = 20; // Reset ival
    bool c_result = *ptr++ == ival; 
    
    cout << "\n--- Expression c) *ptr++ == ival ---" << endl;
    cout << "Result: " << c_result << " (FALSE). Side effect: ptr now points to 20." << endl;
    cout << "  (10 == 20) is false. ptr is incremented BEFORE the comparison." << endl;

    return 0;
}