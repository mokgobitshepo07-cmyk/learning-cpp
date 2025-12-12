#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    // C++ Primer, Chapter 5, Exercise 5.2 Example: Analyzing Statements in a Loop
    
    // Variables to hold the counts for each vowel
    unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    
    cout << "Enter a string of characters (Ctrl+Z or Ctrl+D to end input):" << endl;
    
    // The conditional statement (cin >> ch) reads one character and checks if the read succeeded.
    while (cin >> ch) { // This is the while loop statement.
        
        // This block {...} is the compound statement that forms the loop body.
        switch (ch) { // The switch statement is the primary statement inside the loop body.
            case 'a':
            case 'A':
                aCnt++;
                break;
            case 'e':
            case 'E':
                eCnt++;
                break;
            case 'i':
            case 'I':
                iCnt++;
                break;
            case 'o':
            case 'O':
                oCnt++;
                break;
            case 'u':
            case 'U':
                uCnt++;
                break;
        } // End of switch statement
        
    } // End of while loop body
    
    // The final output statements are part of the main function's body.
    cout << "\n--- Vowel Counts ---" << endl;
    cout << "Number of 'a's: " << aCnt << endl;
    cout << "Number of 'e's: " << eCnt << endl;
    cout << "Number of 'i's: " << iCnt << endl;
    cout << "Number of 'o's: " << oCnt << endl;
    cout << "Number of 'u's: " << uCnt << endl;

    return 0;
}