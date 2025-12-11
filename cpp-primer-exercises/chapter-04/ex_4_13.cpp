#include <iostream>

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.13 Example: Assignment with Mixed Types
    
    int i;
    double d;
    
    // a) d = i = 3.5;
    // Evaluation (Right-to-Left Associativity for assignment):
    // 1. i = 3.5: Truncation occurs. The double 3.5 is converted to int 3. i is now 3.
    // 2. d = i: The value of i (3) is promoted to double (3.0) and assigned to d. d is now 3.0.
    
    cout << "--- Expression a) d = i = 3.5 ---" << endl;
    d = i = 3.5;
    cout << "i: " << i << endl; // Should be 3
    cout << "d: " << d << endl; // Should be 3.0
    
    // Reset variables
    i = 5;
    d = 10.0;
    
    // b) i = d = 3.5;
    // Evaluation (Right-to-Left Associativity for assignment):
    // 1. d = 3.5: No conversion needed. d is now 3.5.
    // 2. i = d: Truncation occurs. The double 3.5 is converted to int 3. i is now 3.
    
    cout << "\n--- Expression b) i = d = 3.5 ---" << endl;
    i = d = 3.5;
    cout << "i: " << i << endl; // Should be 3
    cout << "d: " << d << endl; // Should be 3.5 (Note: Original i value is overwritten in this example)

    return 0;
}