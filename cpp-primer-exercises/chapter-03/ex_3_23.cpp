#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.23 Example: Doubling Elements with Iterators
    
    // Initialize a vector of 10 integers
    vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    cout << "Original vector: ";
    for (int i : ivec) {
        cout << i << " ";
    }
    cout << endl;

    // Iterate through the vector using iterators
    // it starts at begin(), continues while it is not end(), and increments
    for (auto it = ivec.begin(); it != ivec.end(); ++it) {
        // Dereference the iterator (*it) to get the actual integer element,
        // and multiply it by 2, storing the new value back into the element.
        *it = *it * 2; 
        // Or the shorthand: *it *= 2;
    }
    
    cout << "Modified vector (doubled): ";
    for (int i : ivec) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}