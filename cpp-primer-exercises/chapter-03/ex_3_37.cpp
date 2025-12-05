#include <iostream>

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.37 Example: C-Style String Traversal

    // Define a character array (a C-style string). 
    // The string literal "a simple string" includes the implicit null terminator ('\0').
    const char ca[] = "a simple string"; 
    
    // Initialize a pointer to the beginning of the array.
    const char *cp = ca; 
    
    cout << "Original array content: " << ca << endl;
    cout << "Traversing with pointer: ";

    // Loop continues as long as the pointer dereferences to a character that is NOT the null terminator ('\0').
    // When *cp becomes '\0' (which evaluates to false in the while condition), the loop stops.
    while (*cp) {
        cout << *cp;
        ++cp; // Advance the pointer to the next character.
    }
    cout << endl;

    // Note: If the array ca[] did not have a null terminator, this loop would read 
    // indefinitely until it accidentally hit a zero byte in memory (Undefined Behavior).

    return 0;
}