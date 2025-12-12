#include <iostream>
#include <iomanip> // For std::hex, std::showbase

using std::cout;
using std::endl;

// Helper function to print binary representation (simplified)
void print_binary(int n) {
    for (int i = 31; i >= 0; --i) {
        cout << ((n >> i) & 1);
        if (i % 8 == 0 && i != 0) cout << " ";
    }
}

int main() {
    // C++ Primer, Chapter 4, Exercise 4.25 Example: Bitwise Operators
    
    // Expression to analyze: ~'q' << 6
    // 'q' is 113 in ASCII.
    
    // The expression 1 << 6 is commonly used to create a mask with the 7th bit set (0x40).
    int mask = 1 << 6;
    
    cout << "--- Analysis of Bitwise Operators ---" << endl;
    
    // 1. Initial Value ('q' = 113)
    int q_val = 'q';
    cout << "Value of 'q' (113):  ";
    print_binary(q_val);
    cout << endl;

    // 2. Bitwise NOT (~'q')
    int not_q = ~q_val;
    cout << "Value of ~'q': ";
    print_binary(not_q);
    cout << " (Decimal: " << not_q << ")" << endl;
    
    // 3. Left Shift (~'q' << 6)
    int result = ~q_val << 6;
    cout << "Value of ~'q' << 6: ";
    print_binary(result);
    cout << " (Decimal: " << result << ")" << endl;
    
    cout << "\n--- Common Use Case: Setting the 7th bit (0x40) ---" << endl;
    cout << "Mask (1 << 6):        ";
    print_binary(mask);
    cout << endl;

    return 0;
}