#include <iostream>

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.27 Example: Bitwise vs. Logical Operators
    
    // Define two unsigned long variables
    unsigned long ul1 = 3, ul2 = 7; 
    
    // Binary representations:
    // ul1 (3): ...0011
    // ul2 (7): ...0111
    
    // ------------------------------------------
    // a) ul1 & ul2
    // ------------------------------------------
    // Bitwise AND (&): Compares corresponding bits. 1 & 1 = 1; 1 & 0 = 0.
    // ...0011
    // & ...0111
    // ---------
    //   ...0011 (Result is 3)
    unsigned long bitwise_result = ul1 & ul2;
    
    cout << "--- Bitwise AND (&) ---" << endl;
    cout << "ul1 & ul2: " << bitwise_result << endl; 
    
    // ------------------------------------------
    // b) ul1 && ul2
    // ------------------------------------------
    // Logical AND (&&): Compares boolean values (any non-zero is true).
    // 1. ul1 (3) is converted to TRUE.
    // 2. ul2 (7) is converted to TRUE.
    // 3. TRUE && TRUE = TRUE.
    // 4. The result (TRUE) is converted to the integer 1.
    unsigned long logical_result = ul1 && ul2;
    
    cout << "\n--- Logical AND (&&) ---" << endl;
    cout << "ul1 && ul2: " << logical_result << endl; // Result is always 1 (true)
    
    // ------------------------------------------
    // c) ul1 | ul2
    // ------------------------------------------
    // Bitwise OR (|): If EITHER bit is 1, the result bit is 1.
    // ...0011
    // | ...0111
    // ---------
    //   ...0111 (Result is 7)
    unsigned long bitwise_or = ul1 | ul2;
    
    cout << "\n--- Bitwise OR (|) ---" << endl;
    cout << "ul1 | ul2: " << bitwise_or << endl; 
    
    // ------------------------------------------
    // d) ul1 || ul2
    // ------------------------------------------
    // Logical OR (||): Compares boolean values.
    // TRUE || TRUE = TRUE (Result is 1).
    unsigned long logical_or = ul1 || ul2;
    
    cout << "\n--- Logical OR (||) ---" << endl;
    cout << "ul1 || ul2: " << logical_or << endl; // Result is always 1 (true)

    return 0;
}