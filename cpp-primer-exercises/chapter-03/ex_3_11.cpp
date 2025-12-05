#include <iostream>
#include <vector> // Required for std::vector
#include <string>

using std::cout;
using std::endl;
using std::vector;

// Function to print a vector
void print_vector(const vector<int>& v, const std::string& name) {
    cout << name << " (Size: " << v.size() << ") = { ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << "}" << endl;
}

int main() {
    // C++ Primer, Chapter 3, Exercise 3.11 Example: Vector Initialization
    
    // 1. Default initialization: Empty vector
    vector<int> v1; 
    
    // 2. List initialization: Initialize with specific elements
    vector<int> v2 = {10, 20, 30, 40}; 
    
    // 3. Direct initialization: Specify size and default value (10 elements, all initialized to 1)
    vector<int> v3(10, 1); 
    
    // 4. Copy initialization: v4 is a copy of v3
    vector<int> v4 = v3; 
    
    // 5. Direct size initialization: Specify size only (15 elements, all initialized to 0)
    // For built-in types like int, size-only initialization guarantees zero-initialization.
    vector<int> v5(15); 
    
    print_vector(v1, "v1");
    print_vector(v2, "v2");
    print_vector(v3, "v3");
    print_vector(v4, "v4");
    print_vector(v5, "v5");

    return 0;
}