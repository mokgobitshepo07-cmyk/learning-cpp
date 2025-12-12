#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    // C++ Primer, Chapter 5, Exercise 5.10 Example: Vowel Counter using Switch Statement
    
    // Variables to hold the count for each vowel type
    unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    
    cout << "Enter a string of characters (Ctrl+Z or Ctrl+D to end input):" << endl;
    
    while (cin >> ch) { 
        
        // The switch statement checks the value of the character 'ch'
        switch (ch) {
            case 'a':
            case 'A': // Fall through from 'A' to 'a'
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
        }
        
    }
    
    cout << "\n--- Vowel Counts (using switch) ---" << endl;
    cout << "Number of 'a's: " << aCnt << endl;
    cout << "Number of 'e's: " << eCnt << endl;
    cout << "Number of 'i's: " << iCnt << endl;
    cout << "Number of 'o's: " << oCnt << endl;
    cout << "Number of 'u's: " << uCnt << endl;
    cout << "Total Vowels: " << aCnt + eCnt + iCnt + oCnt + uCnt << endl;

    return 0;
}