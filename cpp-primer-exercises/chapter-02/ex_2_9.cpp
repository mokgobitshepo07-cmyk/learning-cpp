#include <iostream>

int main() {
    // C++ Primer, Chapter 2, Exercise 2.9 Example: Initialization and Errors
    
    // a) Illustrate an invalid initialization (non-const reference from a literal)
    // int &r1 = 10; // ERROR: A non-const reference cannot bind to a literal.

    // b) Illustrate correct default initialization (Zero initialization is guaranteed for static/global variables, 
    //    but local built-ins are uninitialized unless explicitly set)
    int i = 0; 
    
    // c) Illustrate invalid list initialization (potential narrowing conversion)
    // List initialization using braces {} disallows conversions that lose data.
    // int j{3.14}; // ERROR (if compiled strictly): Implicit narrowing conversion from double to int.
    
    // d) Correct and safe list initialization
    int k{3}; // OK: No narrowing conversion.
    
    // e) List initialization for a character (demonstrates the range check)
    char c1{'a'}; // OK
    // char c2{256}; // ERROR: 256 is out of the valid range for a char (8-bit signed usually up to 127).

    // Correct initialization that avoids the illegal forms:
    int r1_val = 10;
    int &r1 = r1_val; // OK: Reference to a non-const variable
    int j = 3;        // OK: Uses the integer part
    
    std::cout << "r1: " << r1 << std::endl;
    std::cout << "j: " << j << std::endl;
    std::cout << "k: " << k << std::endl;
    std::cout << "c1: " << c1 << std::endl;

    return 0;
}