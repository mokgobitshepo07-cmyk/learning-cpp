#include <iostream>
#include <iomanip>
#include <limits>

using std::cout;
using std::endl;

// Helper function to print binary for demonstration (simplified for 32-bit int)
void print_binary(unsigned int n) {
    for (int i = 31; i >= 0; --i) {
        cout << ((n >> i) & 1);
        if (i % 8 == 0 && i != 0) cout << " ";
    }
}

int main() {
    // C++ Primer, Chapter 4, Exercise 4.26 Example: Bitwise Operators and Signed Types
    
    // Define a negative signed integer
    int signed_val = -10;
    
    // Define the equivalent unsigned integer
    unsigned int unsigned_val = static_cast<unsigned int>(signed_val);
    
    cout << "--- Signed vs Unsigned Right Shift (Implementation Concerns) ---" << endl;
    cout << "Value: -10 (Decimal)" << endl;
    
    // Binary representation of -10 (Two's Complement)
    cout << "Signed Binary:   ";
    print_binary(unsigned_val);
    cout << endl; // Starts with 1s

    // 1. Signed Right Shift (can be arithmetic or logical pre-C++20)
    // Arithmetic shift (common): The sign bit (1) is copied to fill the high bits.
    int signed_result = signed_val >> 2;
    cout << "Signed >> 2:     ";
    print_binary(static_cast<unsigned int>(signed_result));
    cout << " (Decimal: " << signed_result << ")" << endl; // Usually results in -3
    
    // 2. Unsigned Right Shift (always logical)
    // Logical shift: Zeroes are copied to fill the high bits.
    unsigned int unsigned_result = unsigned_val >> 2;
    cout << "Unsigned >> 2:   ";
    print_binary(unsigned_result);
    cout << " (Decimal: " << unsigned_result << ")" << endl; // Results in a large positive number
    
    cout << "\nConclusion: Bitwise operations are safest with unsigned types because" << endl;
    cout << "their behavior is always defined (logical shifts), unlike signed types" << endl;
    cout << "where right shift behavior used to be implementation-defined." << endl;

    return 0;
}