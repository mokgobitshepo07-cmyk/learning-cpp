#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.15 Example: Reading Strings into Vector
    
    vector<string> svec;
    string input_word;
    
    cout << "Enter a series of words (Ctrl+D to stop input):" << endl;
    
    // Read words one by one until input fails (EOF)
    // The input operator (>>) automatically skips whitespace and reads one word at a time.
    while (cin >> input_word) {
        // Use push_back to append the input word to the end of the vector
        svec.push_back(input_word); 
    }
    
    cout << "\n--- Vector Contents ---" << endl;
    cout << "Total elements read: " << svec.size() << endl;
    
    // Print the contents of the vector
    cout << "Elements: { ";
    for (const string& s : svec) {
        cout << s << " ";
    }
    cout << "}" << endl;

    return 0;
}