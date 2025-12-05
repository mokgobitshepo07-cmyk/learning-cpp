#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.14 Example: Reading Integers into Vector
    
    vector<int> ivec;
    int input_val;
    
    cout << "Enter a series of integers (Ctrl+D to stop input):" << endl;
    
    // Read integers one by one until input fails (EOF or non-integer input)
    while (cin >> input_val) {
        // Use push_back to append the input value to the end of the vector
        ivec.push_back(input_val); 
    }
    
    cout << "\n--- Vector Contents ---" << endl;
    cout << "Total elements read: " << ivec.size() << endl;
    
    // Print the contents of the vector
    cout << "Elements: { ";
    for (int i : ivec) {
        cout << i << " ";
    }
    cout << "}" << endl;

    return 0;
}