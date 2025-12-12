#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.24 Example: Conditional Operator Type Conversion
    
    int score = 85;
    
    // We want to return a grade letter, but the conditional operator requires 
    // the second and third operands to be convertible to a common type.
    
    // The conditional expression typically analyzed here is one that fails 
    // due to mixed types (e.g., returning an int or a string).
    
    // Safe Example: Returning a floating-point type (80.0) or an integer (70)
    // The result will be a floating-point number.
    double passing_score = (score >= 80) ? 80.0 : 70;
    
    cout << "--- Conditional Operator with Mixed Numerical Types ---" << endl;
    cout << "score: " << score << endl;
    cout << "Expression: (score >= 80) ? 80.0 : 70" << endl;
    
    // Evaluation:
    // 1. Condition (85 >= 80) is TRUE.
    // 2. Operands are 80.0 (double) and 70 (int).
    // 3. 70 is converted to 70.0 (double).
    // 4. The entire expression returns a double.
    cout << "Result type: double" << endl;
    cout << "Result value: " << passing_score << endl; // Should be 80.0
    
    // Example of a common error (often the core of the exercise):
    // Trying to mix different types where no standard conversion exists.
    // E.g., string result = (score >= 60) ? "Pass" : 0; // Invalid: int (0) cannot be converted to std::string.
    
    // Correct version for grades (both operands must be compatible strings):
    string grade = (score > 90) ? "A" : (score > 80) ? "B" : "C";
    cout << "\nSafe String Conversion Check (Grade for 85): " << grade << endl;

    return 0;
}