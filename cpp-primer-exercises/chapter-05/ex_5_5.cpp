#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
    // C++ Primer, Chapter 5, Exercise 5.5 Example: Letter-Grade using If/Else If
    
    // A vector to hold the descriptive grades
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    
    int grade;
    
    cout << "Enter a score (0-100): ";
    
    while (cin >> grade) {
        string lettergrade;

        if (grade < 60) {
            // Scores < 60 are always an F
            lettergrade = scores[0];
        } else {
            // Determine the base letter grade (A, B, C, D)
            // Divide by 10 and subtract 5 to get the index (e.g., 60->1, 90->4)
            lettergrade = scores[(grade - 50) / 10];
            
            // Add plus or minus suffix logic for non-F grades (and not 100)
            if (grade != 100) {
                // Check if the last digit is 7, 8, or 9 (for +) or 0, 1, or 2 (for -)
                if (grade % 10 > 7) {
                    lettergrade += "+"; // Add plus for 8 and 9 (e.g., 88, 89)
                } else if (grade % 10 < 3) {
                    lettergrade += "-"; // Add minus for 0, 1, and 2 (e.g., 80, 81, 82)
                }
            }
        }
        
        cout << "Score " << grade << " is a " << lettergrade << endl;
        cout << "Enter next score (Ctrl+D/Z to exit): ";
    }

    return 0;
}