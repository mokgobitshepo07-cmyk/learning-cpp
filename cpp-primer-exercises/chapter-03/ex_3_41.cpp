#include <iostream>
#include <vector>
#include <iterator> // Required for std::begin() and std::end()

using std::cout;
using std::endl;
using std::vector;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.41 Example: Initializing Vector from Array
    
    // 1. Define the source array
    int arr[] = {10, 20, 30, 40, 50};
    
    // 2. Initialize the vector using the array's iterators (pointers)
    // The vector constructor takes a pair of iterators that mark the range to copy.
    vector<int> ivec(std::begin(arr), std::end(arr));
    
    // Verification
    cout << "Array elements: ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
    
    cout << "Vector elements (initialized from array): ";
    for (int val : ivec) {
        cout << val << " ";
    }
    cout << endl;
    cout << "Vector Size: " << ivec.size() << endl;

    return 0;
}