#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
    // C++ Primer, Chapter 5, Exercise 5.6 Example: Letter-Grade using Conditional Operator (Ternary)
    
    // A vector to hold the descriptive grades (Base score of 60 is index 1, 90 is index 4)
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    
    int grade;
    
    cout << "Enter a score (0-100): ";
    
    while (cin >> grade) {
        string lettergrade;

        // 1. Determine the base letter grade (A, B, C, D, or F) using a single nested ternary chain.
        // If score < 60, it's scores[0] ("F"). Otherwise, calculate index (grade - 50) / 10.
        lettergrade = (grade < 60) ? scores[0] : scores[(grade - 50) / 10];
        
        // 2. Add plus or minus suffix logic for non-F grades (and not 100).
        // This requires an IF/ELSE for the conditional structure, as nesting the suffix logic 
        // with the letter grade logic becomes prohibitively unreadable.
        if (grade >= 60 && grade != 100) {
            // Suffix logic using a nested ternary operator:
            lettergrade += (grade % 10 > 7) ? "+" :  // Plus for 8 and 9
                           (grade % 10 < 3) ? "-" :  // Minus for 0, 1, and 2
                           "";                       // Empty string otherwise
        }
        
        cout << "Score " << grade << " is a " << lettergrade << endl;
        cout << "Enter next score (Ctrl+D/Z to exit): ";
    }

    return 0;
}