#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.3 Example: Processing Input Streams
    
    // We will read input word by word, accumulating the total count of words.
    string word;
    int word_count = 0;
    
    cout << "Enter text (press Ctrl+D on Linux/WSL or Ctrl+Z then Enter on Windows to stop input):" << endl;
    
    // The standard way to read until end-of-file (EOF).
    // The expression (cin >> word) returns cin, which is evaluated as true if the read was successful.
    while (cin >> word) {
        word_count++;
        // Optionally, print the word as you read it:
        // cout << "Read: " << word << endl; 
    }
    
    cout << "\n--- Input Finished ---" << endl;
    cout << "Total number of words read: " << word_count << endl;

    return 0;
}