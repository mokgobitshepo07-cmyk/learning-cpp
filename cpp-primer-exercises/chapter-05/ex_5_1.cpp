#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    // C++ Primer, Chapter 5, Exercise 5.1 Example: Simple and Null Statements
    
    vector<int> ivec = {1, 2, 3, 4, 5};
    
    // An iterator pointing to the first element
    auto iter = ivec.begin(); 
    
    // The expression inside the parentheses is the condition.
    // The semicolon immediately after the parentheses constitutes the loop body (a null statement).
    // The loop iterates, advancing 'iter' until it reaches the end, but performs 
    // no action inside the body itself.
    while (iter != ivec.end())
        iter++; // This is the statement controlled by the while loop.
    
    cout << "--- Null Statement Analysis ---" << endl;
    cout << "The loop iterated, moving the iterator from beginning to end." << endl;
    cout << "Final check (iter == ivec.end()): " << (iter == ivec.end() ? "True" : "False") << endl;
    
    // Example of a common error: The extra semicolon creates a null statement.
    // while (iter != ivec.end()); // This loop runs infinitely if the condition is always true.
    //     iter++; // This line would only execute ONCE after the loop finishes.
    
    // The primary takeaway is that a single semicolon is a complete, null statement.

    return 0;
}