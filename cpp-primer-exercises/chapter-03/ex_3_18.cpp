#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.18 Example: Vector Initialization and push_back
    
    vector<int> ivec; // Correct: Default initialization (size 0)

    // The exercise often asks: Is this code valid?
    // ivec[0] = 42; 
    // The line above is INVALID because ivec is empty (size 0), and subscripting 
    // requires an element at that index to already exist. Accessing it results in 
    // undefined behavior (often a crash).
    
    // The CORRECT way to add an element to an empty vector:
    ivec.push_back(42); 
    
    cout << "Vector size after push_back: " << ivec.size() << endl;
    cout << "Element at index 0: " << ivec[0] << endl;
    
    // Another example of correct initialization and use:
    vector<int> ivec2(10); // Size 10, all elements initialized to 0
    ivec2[5] = 100;        // OK: Index 5 exists.
    
    cout << "ivec2 element at index 5: " << ivec2[5] << endl;

    return 0;
}