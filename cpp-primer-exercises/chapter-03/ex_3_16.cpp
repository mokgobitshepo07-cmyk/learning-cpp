#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

// Templated function to print the contents of any vector type
template <typename T>
void print_vector(const vector<T>& v, const string& name) {
    cout << name << " (Size: " << v.size() << ", Type: ";
    
    // Simple type check for display purposes
    if (typeid(T) == typeid(int)) {
        cout << "int";
    } else if (typeid(T) == typeid(string)) {
        cout << "string";
    } else {
        cout << "other";
    }
    
    cout << ") = { ";
    for (const auto& elem : v) {
        if (typeid(T) == typeid(string)) {
            // Print strings in quotes
            cout << "\"" << elem << "\" ";
        } else {
            cout << elem << " ";
        }
    }
    cout << "}" << endl;
}

int main() {
    // C++ Primer, Chapter 3, Exercise 3.16 Example: Initialization Review
    
    // 1. Default initialization
    vector<int> v1; 
    
    // 2. Size initialization (10 elements, value initialized to 0)
    vector<int> v2(10); 
    
    // 3. Size and value initialization (10 elements, all initialized to 42)
    vector<int> v3(10, 42); 
    
    // 4. List initialization (2 elements: 10, 42)
    vector<int> v4{10, 42}; 
    
    // 5. Size initialization for strings (10 elements, default initialized to empty string)
    vector<string> v5(10); 
    
    // 6. Size and value initialization for strings (10 elements, all initialized to "hi")
    vector<string> v6(10, "hi");
    
    // 7. List initialization for strings (3 elements: "hi", "bye", "hello")
    vector<string> v7{"hi", "bye", "hello"};
    
    cout << "--- Vector Initialization Results ---" << endl;
    print_vector(v1, "v1");
    print_vector(v2, "v2");
    print_vector(v3, "v3");
    print_vector(v4, "v4");
    print_vector(v5, "v5");
    print_vector(v6, "v6");
    print_vector(v7, "v7");

    return 0;
}