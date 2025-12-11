#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.10 Example: Input Loop with Stop Condition
    
    int val = 0;
    
    cout << "Enter a series of integers. The loop will stop when you input '42'." << endl;
    
    // The condition (cin >> val) first reads an integer. If the read is successful, 
    // it evaluates to true. Then, the logical AND checks if val is NOT 42.
    // Short-circuiting guarantees that if the input fails, the second check isn't performed.
    while (cin >> val && val != 42) {
        cout << "  Input received: " << val << endl;
    }
    
    cout << "\nLoop terminated. '42' was either input, or input failed." << endl;

    return 0;
}