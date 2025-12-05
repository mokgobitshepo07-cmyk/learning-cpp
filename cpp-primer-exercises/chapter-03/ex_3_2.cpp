#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.2 Example: Reading Lines vs. Words
    
    string line_input;
    
    // Demonstrate reading an entire line using getline
    cout << "Enter an entire line of text (including spaces): " << endl;
    getline(cin, line_input);
    
    cout << "\n--- Output from getline: ---" << endl;
    cout << "You entered: " << line_input << endl;
    
    // Note: If you were to use 'cin >> line_input' here, it would only read the first word.
    
    // We will demonstrate reading word-by-word (optional, for comparison)
    // To do this properly, we need to clear the input stream, but for simplicity, 
    // we'll just note the difference. The code above focuses on the getline function.
    
    return 0;
}