#include <iostream>
#include <vector>
#include <iterator> // For std::begin/std::end
#include <algorithm> // For std::equal

using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.36 Example: Array vs. Vector Comparison
    
    // ------------------------------------------
    // Part 1: Comparing Built-in Arrays
    // ------------------------------------------
    
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int arr3[] = {1, 2, 3, 4, 6};
    
    bool arrays_equal = true;
    
    // Arrays DO NOT support direct comparison (arr1 == arr2 compares memory addresses).
    // We must use a loop or the std::equal algorithm.
    
    // Method: Using std::equal (easiest way to compare elements of two arrays)
    if (std::size(arr1) == std::size(arr2)) {
        // std::equal checks if the range [begin(arr1), end(arr1)) is equal to the range starting at begin(arr2)
        arrays_equal = std::equal(begin(arr1), end(arr1), begin(arr2));
    } else {
        arrays_equal = false; // Different sizes cannot be equal
    }

    if (arrays_equal) {
        cout << "1. Arrays arr1 and arr2 are EQUAL (element by element)." << endl;
    } else {
        cout << "1. Arrays arr1 and arr2 are NOT equal." << endl;
    }
    
    // ------------------------------------------
    // Part 2: Comparing Vectors
    // ------------------------------------------
    
    vector<int> vec1 = {10, 20, 30};
    vector<int> vec2 = {10, 20, 30};
    vector<int> vec3 = {10, 20, 30, 40};
    
    // Vectors support direct comparison (operator==)
    if (vec1 == vec2) {
        cout << "2. Vectors vec1 and vec2 are EQUAL (direct operator==)." << endl;
    } else {
        cout << "2. Vectors vec1 and vec2 are NOT equal." << endl;
    }
    
    if (vec1 == vec3) {
        cout << "3. Vectors vec1 and vec3 are EQUAL." << endl;
    } else {
        cout << "3. Vectors vec1 and vec3 are NOT equal (due to size)." << endl;
    }

    return 0;
}