#include <iostream>
#include <iterator> // Required for std::begin/std::end with arrays

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.26 Example: Pointers vs. Array Subscripting
    
    // Define a standard C-style array (size 10)
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // Get pointers to the beginning and end (one past the last element)
    // std::begin and std::end work for both containers and built-in arrays
    int *beg = std::begin(arr);
    int *end = std::end(arr);
    
    // Calculate the length of the array
    std::size_t len = end - beg;
    
    // Calculate the pointer to the middle element
    // The middle index is usually length / 2, or length / 2 if we want the left of center for even length
    int *mid = beg + (len / 2); 
    
    cout << "Array Length: " << len << endl;
    cout << "The element at the calculated middle index is (using pointer arithmetic): " << *mid << endl;
    
    // Verify using array subscripting (the result should be the same)
    cout << "The element at the middle index (" << (len / 2) << ") is (using subscripting): " << arr[len / 2] << endl;
    
    return 0;
}