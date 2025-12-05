#include <iostream>
#include <iterator> // For std::end/std::begin

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.30 Example: Pointer Initialization and Errors
    
    // 1. Define a simple array
    int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    // 2. The common error (often highlighted in this exercise):
    // size_t arr_size = sizeof(ia) / sizeof(*ia);
    // for (size_t ix = 0; ix != arr_size; ++ix) {
    //     ix_arr[ix] = ix; // ERROR: ix_arr is UNINITIALIZED and UNSIZED!
    // }
    
    // The error is often related to using an uninitialized array or calculating size incorrectly.
    // The corrected, proper way to manage the array with a pointer loop:
    
    // Initialize a pointer (beg) to the start of the array
    int *beg = std::begin(ia); 
    
    // Get the pointer to one past the end of the array (end)
    int *end = std::end(ia);
    
    cout << "Array elements (using pointer traversal):" << endl;
    
    // Loop while the beginning pointer has not reached the end pointer
    while (beg != end) {
        cout << *beg << " ";
        ++beg; // Move the pointer to the next element
    }
    cout << endl;

    return 0;
}