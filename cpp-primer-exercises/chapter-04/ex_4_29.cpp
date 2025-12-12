#include <iostream>
#include <cstddef> // Required for size_t

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.29 Example: sizeof Array vs. Pointer
    
    // Define an array with 10 integers (typically 40 bytes)
    int ia[10]; 
    
    // Define a pointer to the first element of the array
    int *ptr = ia; 
    
    cout << "--- Analysis of sizeof Array vs Pointer ---" << endl;
    
    // 1. sizeof(ia)
    // The size of the ENTIRE array (10 elements * sizeof(int)).
    // Example (4-byte int): 10 * 4 = 40 bytes.
    size_t size_of_array = sizeof(ia);
    cout << "sizeof(ia) [Total Array Size]: " << size_of_array << " bytes" << endl;
    
    // 2. sizeof(ptr)
    // The size of the POINTER itself (the memory address).
    // Example (64-bit system): 8 bytes.
    size_t size_of_pointer = sizeof(ptr);
    cout << "sizeof(ptr) [Pointer Size]:    " << size_of_pointer << " bytes" << endl;
    
    // 3. sizeof(*ptr)
    // The size of the object the pointer points to (an int).
    size_t size_of_object = sizeof(*ptr);
    cout << "sizeof(*ptr) [Object Size]:    " << size_of_object << " bytes" << endl;

    cout << "\nConclusion: sizeof applied to an array gives its size, while" << endl;
    cout << "sizeof applied to a pointer gives the size of the pointer itself." << endl;

    return 0;
}