#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {
    // C++ Primer, Chapter 5, Exercise 5.8 Example: Block (Compound Statement) Analysis
    
    // Primary Purpose 1: Grouping statements
    int x = 10;
    
    if (x > 5) { // The curly braces define the block statement
        // Statement 1:
        cout << "X is greater than 5." << endl;
        // Statement 2:
        x = 0;
    }
    
    // Primary Purpose 2: Defining Scope
    // Variables declared inside a block are only visible inside that block.
    
    cout << "\n--- Scope Demonstration ---" << endl;
    
    { // Start of an arbitrary, local block
        string message = "This message is only visible inside this block.";
        cout << "Inside block: " << message << endl;
        int local_var = 100;
        cout << "Inside block: local_var = " << local_var << endl;
    } // End of local block. 'message' and 'local_var' are destroyed.
    
    // This line would cause a compiler error:
    // cout << message << endl; // Error: 'message' was not declared in this scope
    
    cout << "Outside block: The variables 'message' and 'local_var' no longer exist." << endl;

    return 0;
}