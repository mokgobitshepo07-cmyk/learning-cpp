#include <iostream>
#include <cstddef> // Required for std::size_t

using std::cout;
using std::endl;

// The exercise often asks to analyze code like this:
// unsigned buf_size = 1024;
// int ia[buf_size]; // Invalid: Array size must be a compile-time constant (unless using VLA, which is non-standard C++)

// Illustrate a potentially problematic character array initialization
// const char ca1[] = {'C', 'p', 'p'}; // Valid, size 3, but LACKS null terminator!

// const char ca2[] = "Cpp"; // Valid, size 4 (includes implicit '\0')

// Define a function that returns a size based on an array
// The following function often causes discussion because arrays decay to pointers:
// constexpr size_t get_size() { return 10; }
// int ia[get_size()]; // Valid if get_size() is a constexpr function

int main() {
    // C++ Primer, Chapter 3, Exercise 3.27 Example: Array Initialization Rules
    
    // 1. Correct character array initialization with implicit null terminator
    const char ca1[] = "Hello"; 
    
    // 2. Character array initialized explicitly WITHOUT null terminator (risky!)
    const char ca2[] = {'W', 'o', 'r', 'l', 'd'}; // Size is 5.
    
    // 3. Array initialization with size equal to the literal length (implicitly adds '\0')
    const char ca3[6] = "World"; // Size is 6. The literal "World" requires 6 (5 chars + '\0').

    cout << "ca1 (size " << sizeof(ca1) / sizeof(*ca1) << "): " << ca1 << endl;
    cout << "ca2 (size " << sizeof(ca2) / sizeof(*ca2) << "): ";
    // Outputting ca2 directly is dangerous! We must loop to avoid reading past the array boundary.
    for (std::size_t i = 0; i < sizeof(ca2); ++i) {
        cout << ca2[i];
    }
    cout << endl;
    
    cout << "ca3 (size " << sizeof(ca3) / sizeof(*ca3) << "): " << ca3 << endl;

    return 0;
}