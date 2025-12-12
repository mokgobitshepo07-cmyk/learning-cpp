#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.21 Example: Conditional Operator for Vector Elements
    
    // A vector with a mix of even and odd numbers
    vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    cout << "Original vector: 1 2 3 4 5 6 7 8 9 10" << endl;
    cout << "Processed vector (Odds doubled, Evens unchanged):" << endl;
    
    // Iterate through the vector using a range-for loop with a reference to modify the elements
    for (int &val : ivec) {
        
        // Conditional Operator: 
        // condition ? expression_if_true : expression_if_false
        // condition: val % 2 != 0 (Is the number odd?)
        // expression_if_true: val * 2 (Double the odd number)
        // expression_if_false: val (Keep the even number as is)
        val = (val % 2 != 0) ? val * 2 : val;
        
        cout << val << " ";
    }
    cout << endl;

    return 0;
}