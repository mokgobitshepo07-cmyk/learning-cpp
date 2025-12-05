#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.29 Example: Array vs Vector
    
    // 1. Array: Fixed size, no built-in operations (like copy or append)
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5];
    
    // arr2 = arr1; // ERROR: Arrays DO NOT support assignment (copy)
    
    // 2. Vector: Dynamically sized, supports assignment and operations
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2;
    
    // Vector Assignment (OK)
    vec2 = vec1; 
    
    // Vector Append/Resize (OK)
    vec2.push_back(6); 
    
    // To 'copy' an array, you must use a loop or standard library functions:
    for (size_t i = 0; i < 5; ++i) {
        arr2[i] = arr1[i]; // Manual element-wise assignment
    }
    
    cout << "Array arr2 (Manual Copy): { ";
    for (int i : arr2) {
        cout << i << " ";
    }
    cout << "}" << endl;

    cout << "Vector vec2 (Assignment and push_back): { ";
    for (int i : vec2) {
        cout << i << " ";
    }
    cout << "}" << endl;

    return 0;
}