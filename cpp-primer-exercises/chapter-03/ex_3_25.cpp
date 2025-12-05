#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.25 Example: Nested Vectors (Matrix)
    
    // Create a 3x3 "matrix" initialized to specific values
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    cout << "--- Matrix Contents (Vector of Vectors) ---" << endl;
    
    // Outer loop: Iterates through each inner vector (row)
    // The auto& 'row' is a reference to vector<int>
    for (const auto& row : matrix) {
        
        cout << "| ";
        
        // Inner loop: Iterates through each integer element in the current row
        // The auto& 'element' is a reference to int
        for (const auto& element : row) {
            cout << element << " ";
        }
        
        cout << "|" << endl;
    }

    return 0;
}