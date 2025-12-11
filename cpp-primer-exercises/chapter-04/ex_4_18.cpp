#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.18 Example: Postfix Increment with Dereference
    
    vector<int> ivec = {10, 20, 30, 40, 50};
    
    // We will use standard array/pointer syntax for simplicity, 
    // but this applies equally to vector iterators.
    
    // Define the start and end pointers for the array elements
    int *beg = ivec.data(); // Pointer to the first element (10)
    int *end = ivec.data() + ivec.size(); // Pointer to one past the last element
    
    cout << "Original vector: 10 20 30 40 50" << endl;
    cout << "Traversing with *p++:" << endl;
    
    // Loop through the array using a pointer.
    // The loop condition is usually a simple test like p != end.
    
    while (beg != end) {
        // The assignment often used in the exercise is:
        // *beg++ = val; // Assign value, then move pointer

        // Here we will just read/print to show the operation:
        
        // 1. Dereference beg, which is the value returned by *beg++ 
        // 2. beg is incremented (moves to the next element) after the value is returned.
        cout << "  Value read: " << *beg++ << endl; 
    }
    
    // After the loop, the pointer 'beg' is equal to 'end'.
    cout << "Loop finished. Pointer address is now at the end." << endl;

    return 0;
}