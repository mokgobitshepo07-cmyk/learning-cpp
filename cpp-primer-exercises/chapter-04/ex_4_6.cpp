#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.6 Example: Even/Odd Check
    
    int val;
    cout << "Enter an integer to check if it's even or odd: ";
    
    if (cin >> val) {
        
        // The modulo operator (%) returns the remainder of the division.
        // If the remainder of dividing by 2 is 0, the number is even.
        if (val % 2 == 0) {
            cout << val << " is an EVEN number." << endl;
        } else {
            // Otherwise, the remainder must be 1 (or -1 for negative odd numbers), meaning it's odd.
            cout << val << " is an ODD number." << endl;
        }
        
    } else {
        cout << "Invalid input." << endl;
    }

    return 0;
}