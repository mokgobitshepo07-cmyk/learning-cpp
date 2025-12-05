#include <iostream>
#include <vector>
#include <string>
#include <cctype> // Required for toupper()

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.17 Example: Case Conversion
    
    vector<string> words;
    string input_word;
    
    cout << "Enter a list of words (Ctrl+D to stop input):" << endl;
    
    // Read words into the vector
    while (cin >> input_word) {
        words.push_back(input_word); 
    }
    
    // Process each word in the vector
    for (string &s : words) {
        // Process each character in the current word
        for (char &c : s) {
            // Convert the character to uppercase
            c = toupper(c); 
        }
    }
    
    cout << "\n--- Uppercase Output (10 words per line) ---" << endl;
    
    // Print the results, 8 words per line for clean formatting
    int count = 0;
    for (const string &s : words) {
        cout << s << " ";
        count++;
        if (count % 8 == 0) {
            cout << endl; // Start a new line after every 8th word
        }
    }
    cout << endl;

    return 0;
}