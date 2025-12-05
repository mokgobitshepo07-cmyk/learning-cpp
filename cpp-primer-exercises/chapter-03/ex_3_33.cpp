#include <iostream>
#include <cstddef> // Required for size_t

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.33 Example: Array Size and Uninitialized Variables
    
    // The issue often discussed is: what happens if the size variable is uninitialized?
    
    // Correct initialization of the array and the loop index
    int ia[10];
    
    // The correct size should be known or calculated:
    constexpr size_t array_size = 10;
    
    // Loop to initialize the array, using the correct, known size
    for (size_t ix = 0; ix < array_size; ++ix) {
        ia[ix] = ix;
    }
    
    // Print the elements to verify initialization
    cout << "Array elements (initialized): ";
    for (int val : ia) {
        cout << val << " ";
    }
    cout << endl;
    
    // NOTE: If we had used an uninitialized 'size_t size' variable in the loop
    // condition, the loop would execute an unpredictable number of times, leading 
    // to a crash or undefined behavior. This highlights why local built-in variables
    // must always be explicitly initialized.

    return 0;
}