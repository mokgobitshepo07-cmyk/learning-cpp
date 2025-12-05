#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

// Function to print a vector
void print_vector_int(const vector<int>& v, const string& name) {
    cout << name << " (Size: " << v.size() << ") = { ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << "}" << endl;
}

int main() {
    // C++ Primer, Chapter 3, Exercise 3.13 Example: Initialization Styles
    
    // a) List initialization: Vector contains four integers (10, 20, 30, 40)
    vector<int> v1 = {10, 20, 30, 40}; 
    
    // b) Direct initialization with two arguments: Size 5, initialized value 1
    vector<int> v2(5, 1); 
    
    // c) Parentheses (Direct initialization): Size 10, all elements default initialized (to 0)
    vector<int> v3(10); 
    
    // d) Braces (List initialization): Vector contains ONE element, the integer 10
    vector<int> v4 = {10}; 
    
    // e) Parentheses (Direct initialization): Size 10, initialized value -1
    vector<int> v5(10, -1);
    
    // f) Braces (List initialization): Vector contains two elements (10, 20)
    vector<int> v6{10, 20}; 
    
    print_vector_int(v1, "v1");
    print_vector_int(v2, "v2");
    print_vector_int(v3, "v3");
    print_vector_int(v4, "v4");
    print_vector_int(v5, "v5");
    print_vector_int(v6, "v6");

    return 0;
}