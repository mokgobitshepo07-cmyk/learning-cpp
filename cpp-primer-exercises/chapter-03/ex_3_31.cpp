#include <iostream>
#include <cstddef> // Required for size_t
#include <iterator> // Required for std::size

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.31 Example: Array Copy
    
    // 1. Define the source array
    int arr[10];
    
    // Initialize arr with values 0 through 9
    for (size_t i = 0; i < std::size(arr); ++i) {
        arr[i] = i;
    }
    
    // 2. Define the destination array
    int arr2[10];
    
    // 3. Copy the elements from arr to arr2 manually using a loop (like assignment)
    for (size_t i = 0; i < std::size(arr); ++i) {
        arr2[i] = arr[i];
    }
    
    cout << "Original Array (arr): ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Copied Array (arr2): ";
    for (int val : arr2) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}