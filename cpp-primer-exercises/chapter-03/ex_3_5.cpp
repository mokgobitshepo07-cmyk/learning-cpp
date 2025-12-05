#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.5 Example: String Concatenation
    
    string combined_string;
    string current_word;
    
    cout << "Enter a series of words (Ctrl+D to stop input):" << endl;
    
    // Read word by word until end-of-file
    while (cin >> current_word) {
        
        // Option A: Concatenate without spaces
        // combined_string += current_word; 
        
        // Option B: Concatenate with a space separator
        // If the string is not empty, prepend a space before adding the new word
        if (!combined_string.empty()) {
            combined_string += " ";
        }
        combined_string += current_word; 
    }
    
    cout << "\n--- Concatenated Result ---" << endl;
    cout << combined_string << endl;

    return 0;
}