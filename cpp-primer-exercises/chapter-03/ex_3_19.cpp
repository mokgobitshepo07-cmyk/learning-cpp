#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

// Function to print a vector for verification
void print_vector(const vector<int>& v, const std::string& name) {
    cout << name << " (Size: " << v.size() << ") = { ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << "}" << endl;
}

int main() {
    // C++ Primer, Chapter 3, Exercise 3.19 Example: Equivalent Initializations for 10 x 42
    
    // Method 1: Direct Constructor Initialization (Most straightforward)
    vector<int> v1(10, 42); 
    
    // Method 2: List Initialization (Viable for small counts, but tedious for 10)
    // We only list a few for brevity, but this demonstrates the concept.
    vector<int> v2 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42}; 
    
    // Method 3: Default Initialization + Loop (Necessary when value is computed at runtime)
    vector<int> v3;
    for (int i = 0; i < 10; ++i) {
        v3.push_back(42);
    }
    
    cout << "--- Three Equivalent Initializations ---" << endl;
    print_vector(v1, "v1 (Constructor)");
    print_vector(v2, "v2 (List Init)");
    print_vector(v3, "v3 (Loop Init)");

    return 0;
}