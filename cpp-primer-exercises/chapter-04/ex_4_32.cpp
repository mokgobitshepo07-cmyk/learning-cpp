#include <iostream>
#include <iterator> // For std::begin/std::end

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.32 Example: Pointer Iteration and Conditional Operator
    
    constexpr size_t array_size = 10;
    int ia[array_size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    // 1. Setup Pointers
    int *low = std::begin(ia);     // Pointer to the first element (0)
    int *high = std::end(ia);      // Pointer to one past the last element
    int *mid = low + array_size / 2; // Pointer to the middle (index 5, value 5)
    
    cout << "Array elements: 0 1 2 3 4 5 6 7 8 9" << endl;
    cout << "Mid element value: " << *mid << endl;
    
    cout << "\n--- Traversing from Low to Mid using conditional logic ---" << endl;
    
    // Original loop structure (often a setup for a binary search-like traversal)
    int count = 0;
    while (low < mid) {
        // Increment 'low' or not based on a condition (simplified here)
        // The conditional operator is used to decide the next step
        low = (*low < 5) ? (low + 1) : low;
        
        cout << "Iteration " << ++count << ": Current element value is " << *low << endl;
        
        // Ensure low moves forward; if it didn't move in the ternary, force it to move here 
        // to prevent an infinite loop in this simple demonstration.
        if (*(low - 1) == *low) {
            low++;
        }
    }
    
    cout << "\nLoop finished. 'low' pointer has reached 'mid' pointer." << endl;
    
    // The key answer for this exercise is: The loop condition (low < mid) ensures the
    // loop iterates from the start up to, but not including, the middle element.
    // The conditional operator (?:) is used to calculate the next position of the pointer (low).

    return 0;
}