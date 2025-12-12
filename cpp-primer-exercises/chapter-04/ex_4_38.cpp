#include <iostream>
#include <vector>
#include <cstddef> // Required for ptrdiff_t

using std::cout;
using std::endl;
using std::vector;

// Type aliases often used in the exercise context
using sz = vector<int>::size_type;
using diff = vector<int>::difference_type;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.38 Example: Type Aliases and Casting
    
    vector<int> ivec = {10, 20, 30, 40, 50};
    
    // 1. Calculate the distance between two elements
    // The result of pointer/iterator subtraction is diff (ptrdiff_t)
    diff distance = ivec.end() - ivec.begin(); // Distance is 5
    
    // 2. Define two size_type variables (sz is unsigned)
    // Note: sz will be an unsigned integer, usually unsigned long long
    sz i = 2;
    sz j = 3; 
    
    // Problem Analysis: The exercise often demonstrates casting for arithmetic
    
    // Incorrect Calculation: Using integer division and casting the result
    // (j / i) results in (3 / 2) = 1 (integer division and truncation).
    // The result is then cast to diff (ptrdiff_t).
    diff incorrect_result = static_cast<diff>(j / i);
    
    cout << "--- Distance Calculation and Casting ---" << endl;
    cout << "Actual vector distance (ivec.end() - ivec.begin()): " << distance << endl;
    
    cout << "\nAnalysis of incorrect_result = static_cast<diff>(j / i):" << endl;
    cout << "j / i (3 / 2) = 1 (Integer truncation occurs FIRST)" << endl;
    cout << "Incorrect result (ptrdiff_t): " << incorrect_result << endl; // Should be 1
    
    // Correct Calculation (using floating point):
    // Cast one of the operands BEFORE division to force floating-point math
    double correct_float = static_cast<double>(j) / i;
    
    cout << "\nCorrected float calculation = static_cast<double>(j) / i:" << endl;
    cout << "Result (double): " << correct_float << endl; // Should be 1.5

    // The key lesson of this exercise is that the cast operator only affects the 
    // single expression immediately following it. The cast must be placed correctly 
    // to influence the arithmetic calculation as intended.

    return 0;
}