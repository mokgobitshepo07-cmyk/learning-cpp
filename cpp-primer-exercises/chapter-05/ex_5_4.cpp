#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main() {
    // C++ Primer, Chapter 5, Exercise 5.4 Example: Analysis of Conditional Statements
    
    // Setup for analysis of loop conditions
    vector<int> ivec = {1, 2, 3};
    auto iter = ivec.begin();
    string s;

    // ------------------------------------------
    // a) while (iter != ivec.end())
    // ------------------------------------------
    // Status: VALID.
    // The conditional operator (!=) returns a bool (true or false).
    // This is the standard, correct way to iterate over a container.
    cout << "--- Condition a) while (iter != ivec.end()) ---" << endl;
    cout << "Status: VALID." << endl;
    
    // We can run this loop successfully:
    while (iter != ivec.end()) {
        cout << "  Element: " << *iter << endl;
        ++iter;
    }
    
    // ------------------------------------------
    // b) while (bool status = cin >> s, !status)
    // ------------------------------------------
    // Status: INVALID and poorly structured.
    // The expression uses the comma operator: (status = cin >> s), !status
    // 1. `cin >> s` attempts to read, returns cin, which converts to bool (true/false) based on success.
    // 2. This bool is assigned to `status`.
    // 3. The comma operator returns `!status`.
    // The loop condition is TRUE if `cin >> s` FAILS.
    // The structure is technically VALID due to the comma operator, but the logic is backward and confusing.
    
    cout << "\n--- Condition b) while (bool status = cin >> s, !status) ---" << endl;
    cout << "Status: Technically VALID due to the comma operator, BUT LOGICALLY FLAWED/REVERSE." << endl;
    cout << "It says: Loop WHILE input FAILS (!!status)." << endl;

    // The preferred, idiomatic way to loop until input fails is simpler:
    cout << "\nIdiomatic loop (Loops WHILE input SUCCEEDS):" << endl;
    cout << "Enter a string (Ctrl+D/Z to exit): ";
    
    while (cin >> s) { // Loop WHILE cin >> s returns true (success)
        cout << "  Input Success: " << s << endl;
    }
    
    cout << "\nInput loop exited." << endl;

    // NOTE: To test the input loop, you must run the program and type something, then signal EOF.

    return 0;
}