#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.12 Example: Vector Type Compatibility
    
    // a) Define a vector of vectors of integers. Valid.
    vector<vector<int>> ivec; 
    
    // b) Define a vector of strings. Valid.
    vector<string> svec = {"a", "b", "c"};
    
    // c) Define a vector of strings using a constructor argument (size 10, default initialized to empty string). Valid.
    vector<string> svec2(10); 

    // The exercise often asks: Which of the following is an error?
    
    // Example 1: Copy initialization. Types MUST match.
    // vector<int> ivec2 = svec; // ERROR: Cannot initialize vector<int> from vector<string>
    
    // Example 2: List initialization. Elements MUST match type.
    // vector<string> svec3 = {"hi", "hello", 5}; // ERROR: 5 is an int, cannot be list-initialized into string vector without conversion.

    cout << "ivec is a vector of vector<int>." << endl;
    cout << "svec is a vector<string> with " << svec.size() << " elements." << endl;
    cout << "svec2 is a vector<string> with " << svec2.size() << " elements." << endl;

    // Add an element to the nested vector to demonstrate ivec structure
    vector<int> inner_vec = {1, 2, 3};
    ivec.push_back(inner_vec);

    cout << "ivec now contains " << ivec.size() << " inner vector(s)." << endl;

    return 0;
}