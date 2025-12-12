#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// Function to get the grade using NESTED conditional operators
string get_grade_ternary(int score) {
    string final_grade;
    
    // Grading logic using nested conditional operators:
    // If score > 90, result is "high pass"
    // Else, if score > 75, result is "pass"
    // Else, if score > 60, result is "low pass"
    // Else, result is "fail"
    final_grade = (score > 90) ? "high pass" : 
                  (score > 75) ? "pass" : 
                  (score > 60) ? "low pass" : "fail";
                  
    return final_grade;
}

// Function to get the grade using standard if/else if (for comparison)
string get_grade_ifelse(int score) {
    if (score > 90) {
        return "high pass";
    } else if (score > 75) {
        return "pass";
    } else if (score > 60) {
        return "low pass";
    } else {
        return "fail";
    }
}

int main() {
    // C++ Primer, Chapter 4, Exercise 4.22 Example: Nested Conditional Operator for Grading
    
    int score;
    cout << "Enter a score (0-100): ";
    
    if (cin >> score && score >= 0 && score <= 100) {
        
        cout << "\n--- Grading Results ---" << endl;
        
        // Use the ternary version:
        string ternary_result = get_grade_ternary(score);
        cout << "Ternary Result: " << ternary_result << endl;
        
        // Use the if/else version (which is generally preferred for readability):
        string ifelse_result = get_grade_ifelse(score);
        cout << "If/Else Result: " << ifelse_result << endl;
        
    } else {
        cout << "Invalid score entered." << endl;
    }

    return 0;
}