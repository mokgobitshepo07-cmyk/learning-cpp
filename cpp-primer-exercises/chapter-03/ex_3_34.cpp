#include <iostream>
#include <iterator> // For std::begin/std::end

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.34 Example: Pointer Arithmetic and Manipulation
    
    // Define an array
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    // Initialize pointers to two different elements
    int *p1 = arr + 2; // p1 points to arr[2] (value 2)
    int *p2 = arr + 7; // p2 points to arr[7] (value 7)
    
    cout << "Initial Values: *p1 = " << *p1 << ", *p2 = " << *p2 << endl;
    
    // The trick question: What does the following statement do?
    // p1 = p1 + p2 - p1;
    // C++ Pointer Arithmetic Rule: p2 - p1 yields the distance (an integer) between them.
    // p1 + (distance) yields the address that is 'distance' elements past p1.
    // The calculation simplifies to: p1 + (p2 - p1) == p2.
    
    // Execute the pointer manipulation
    p1 = p1 + (p2 - p1);
    
    cout << "\nAfter assignment: p1 = p1 + (p2 - p1);" << endl;
    
    // p1 now points to the same element as p2
    cout << "New *p1 (should be same as initial *p2): " << *p1 << endl;
    
    // Demonstrate basic pointer comparison:
    if (p1 == p2) {
        cout << "Confirmation: p1 and p2 now point to the same address." << endl;
    } else {
        cout << "Error: Pointers do not match." << endl;
    }

    return 0;
}