#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.31 Example: Prefix vs. Postfix in a Loop
    
    vector<int> ivec(10); // Vector of 10 elements, initialized to 0
    
    // The book's example often uses indices:
    vector<int>::size_type ix = 0;
    
    // ------------------------------------------
    // Original (Inefficient) Version using Postfix:
    // ------------------------------------------
    // In this context, ix++ returns the original value of ix, which is used 
    // to index the vector, and THEN ix is incremented.
    // The primary drawback is that ix++ requires the system to save the 
    // original value of ix before incrementing it (creating a temporary object).
    
    ix = 0; // Reset index
    for (; ix != ivec.size(); ix++) {
        ivec[ix] = ix * 10;
    }
    
    cout << "Postfix Version Output (ix++):" << endl;
    for (int val : ivec) {
        cout << val << " ";
    }
    cout << endl;
    
    // ------------------------------------------
    // Corrected (Efficient) Version using Prefix:
    // ------------------------------------------
    // When the result of the increment expression is discarded (as in the 
    // update-expression of a for loop), prefix increment is preferred.
    // It directly increments the variable and returns the result, avoiding a copy.
    
    ix = 0; // Reset index
    for (; ix != ivec.size(); ++ix) {
        // The body remains the same, proving logical equivalence for simple loops
        // where the value of the increment expression is not used inside the body.
        ivec[ix] = ix * 100;
    }
    
    cout << "\nPrefix Version Output (++ix):" << endl;
    for (int val : ivec) {
        cout << val << " ";
    }
    cout << endl;
    
    cout << "\nConclusion: Both versions achieve the same goal here, but ++ix is preferred " << endl;
    cout << "because it avoids the overhead of creating a temporary object associated with ix++." << endl;

    return 0;
}