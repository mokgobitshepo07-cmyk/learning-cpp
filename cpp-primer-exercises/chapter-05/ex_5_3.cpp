#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    // C++ Primer, Chapter 5, Exercise 5.3 Example: Rewriting Conditional Logic with if/else
    
    // Test vector
    vector<int> ivec = {1, 2, 3, 4, 5};
    
    cout << "Original vector: 1 2 3 4 5" << endl;
    
    // ------------------------------------------
    // Logic using Conditional Operator (Ternary)
    // ------------------------------------------
    vector<int> ivec_ternary = ivec;
    cout << "\n--- Ternary Loop Result (for comparison) ---" << endl;
    
    for (int &val : ivec_ternary) {
        // If odd, double it. If even, keep it the same.
        val = (val % 2 != 0) ? val * 2 : val;
    }
    cout << "Ternary Result: ";
    for (int val : ivec_ternary) {
        cout << val << " ";
    }
    cout << endl;
    
    // ------------------------------------------
    // Logic using IF/ELSE Structure (Preferred for clarity)
    // ------------------------------------------
    vector<int> ivec_ifelse = ivec; // Reset to original values
    cout << "\n--- If/Else Loop Result (Rewritten Logic) ---" << endl;
    
    for (int &val : ivec_ifelse) {
        // Equivalent logic using explicit if/else statements
        if (val % 2 != 0) {
            val = val * 2;
        } else {
            // Explicitly do nothing, or assign val = val;
            // The value remains the same if not modified.
        }
    }
    cout << "If/Else Result: ";
    for (int val : ivec_ifelse) {
        cout << val << " ";
    }
    cout << endl;
    
    cout << "\nConclusion: The if/else structure is generally preferred for clarity," << endl;
    cout << "especially when the action involves multiple steps or complex logic." << endl;

    return 0;
}