#include <iostream>
#include <iterator> // For std::begin/std::end

using std::cout;
using std::endl;

// Function to set all elements in an array range to zero
// The parameters are pointers to the start and one past the end of the range.
void reset_array(int *beg, int *end) {
    // Loop continues as long as the current pointer 'beg' has not reached 'end'
    for (int *ptr = beg; ptr != end; ++ptr) {
        // Dereference the pointer (*ptr) to access the element and set its value to 0
        *ptr = 0; 
    }
}

int main() {
    // C++ Primer, Chapter 3, Exercise 3.35 Example: Setting Array Elements to Zero with Pointers
    
    // Define an array and initialize it with values
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    cout << "Original array: ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
    
    // Call the function using pointers obtained from std::begin and std::end
    reset_array(std::begin(arr), std::end(arr));
    
    cout << "Array after reset: ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}