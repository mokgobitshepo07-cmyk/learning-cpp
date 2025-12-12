#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    // C++ Primer, Chapter 5, Exercise 5.9 Example: Vowel Counter using If Statements
    
    // Variables to hold the total count of all vowels
    unsigned int vowel_count = 0;
    char ch;
    
    cout << "Enter a string of characters (Ctrl+Z or Ctrl+D to end input):" << endl;
    
    while (cin >> ch) { 
        
        // Use an IF/ELSE IF chain for efficiency, as a character can only be one vowel.
        if (ch == 'a' || ch == 'A') {
            vowel_count++;
        } else if (ch == 'e' || ch == 'E') {
            vowel_count++;
        } else if (ch == 'i' || ch == 'I') {
            vowel_count++;
        } else if (ch == 'o' || ch == 'O') {
            vowel_count++;
        } else if (ch == 'u' || ch == 'U') {
            vowel_count++;
        }
        
    }
    
    cout << "\n--- Vowel Count Result ---" << endl;
    cout << "Total number of vowels encountered: " << vowel_count << endl;

    return 0;
}