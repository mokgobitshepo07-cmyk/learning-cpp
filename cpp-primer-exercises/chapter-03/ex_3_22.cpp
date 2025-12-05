#include <iostream>
#include <vector>
#include <string>
#include <cctype> // for toupper()

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.22 Example: Processing Vector<string> with Iterators
    
    // Read the content of the first "paragraph" into a vector of strings (one word per element)
    vector<string> text = {"the", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog."};
    
    cout << "Original text: ";
    for (const string& word : text) {
        cout << word << " ";
    }
    cout << endl;

    // Use iterator 'it' to point to the first word (text.begin())
    auto it = text.begin();
    
    // Check if the vector is not empty before proceeding
    if (it != text.end()) {
        
        // Use a reference iterator 'it' to modify the element (*it is the string)
        string& first_word = *it;
        
        // Use a range-for loop with a reference ('c') to iterate through the characters
        // of the string pointed to by the iterator.
        for (char &c : first_word) {
            c = toupper(c);
        }
    }
    
    cout << "Processed text: ";
    for (const string& word : text) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}