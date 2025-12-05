#include <iostream>
#include <vector>
#include <cstddef>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.32 Example: Array vs. Vector Copy

    // Define the size for the arrays and vectors
    const size_t arr_size = 10;
    
    // ------------------------------------------
    // Part 1: Built-in Arrays (Manual Copy Required)
    // ------------------------------------------
    
    // 1. Source array initialized with 0 through 9
    int arr[arr_size];
    for (size_t i = 0; i < arr_size; ++i) {
        arr[i] = i;
    }
    
    // 2. Destination array
    int arr2[arr_size];
    
    // Copy the elements manually (reusing the loop logic from 3.31)
    for (size_t i = 0; i < arr_size; ++i) {
        arr2[i] = arr[i]; // Element-wise assignment
    }
    
    cout << "--- Built-in Array Copy (Manual) ---" << endl;
    cout << "Copied Array (arr2): ";
    for (int val : arr2) {
        cout << val << " ";
    }
    cout << endl;

    // ------------------------------------------
    // Part 2: std::vector (Easy Copy)
    // ------------------------------------------
    
    // 1. Source vector initialized with 0 through 9
    vector<int> vec;
    for (int i = 0; i < arr_size; ++i) {
        vec.push_back(i);
    }
    
    // 2. Destination vector, copied directly using assignment
    vector<int> vec2 = vec; // Copy initialization (creates a new vector)
    
    cout << "\n--- std::vector Copy (Assignment) ---" << endl;
    cout << "Copied Vector (vec2): ";
    for (int val : vec2) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}