#include <iostream>
#include <iterator>
#include <cstddef> // Required for ptrdiff_t

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.38 Example: Pointer Subtraction
    
    // Define an array
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    
    // Initialize pointers to two different locations
    int *p1 = arr + 2; // Points to arr[2], value 30
    int *p2 = arr + 7; // Points to arr[7], value 80
    
    cout << "p1 points to index 2 (value: " << *p1 << ")" << endl;
    cout << "p2 points to index 7 (value: " << *p2 << ")" << endl;
    
    // Perform pointer subtraction: p2 - p1 yields the distance between them.
    // The result is of type ptrdiff_t (signed integer type)
    std::ptrdiff_t distance = p2 - p1;
    
    cout << "\nResult of p2 - p1 (distance): " << distance << endl;
    
    // The result should be 5, because there are 5 elements between index 2 and index 7.
    
    // Example 2: Subtracting in the other direction
    std::ptrdiff_t negative_distance = p1 - p2;
    cout << "Result of p1 - p2: " << negative_distance << endl;

    return 0;
}