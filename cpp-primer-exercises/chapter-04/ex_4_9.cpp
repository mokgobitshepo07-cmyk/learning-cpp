#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.9 Example: Pointer to Boolean Conversion
    
    // Define a C-style string (which is a char array that decays to a const char* pointer)
    const char *cp = "Hello World";
    
    // Define a C-style string array
    char arr[] = "C++";
    
    // The expression to analyze is:
    // bool test = cp && *cp;

    // 1. cp (const char*) is converted to bool. Since it's not a nullptr, it's TRUE.
    // 2. *cp (the char 'H') is converted to bool. Since it's not the null character ('\0' or 0), it's TRUE.
    // 3. TRUE && TRUE = TRUE.
    
    cout << "--- Testing cp && *cp ---" << endl;
    if (cp && *cp) {
        cout << "cp is NOT a null pointer AND the character it points to is NOT the null terminator ('\\0')." << endl;
    }
    
    // What if we try to access the element past the null terminator? (Illustrative, NOT the exercise focus)
    const char *empty_str = ""; // Points to the null terminator
    
    cout << "\n--- Testing empty_str && *empty_str ---" << endl;
    
    // Test 1: empty_str is not nullptr (TRUE)
    // Test 2: *empty_str is the null terminator ('\0' which is 0), so it converts to FALSE.
    if (empty_str && *empty_str) {
        cout << "This will NOT print." << endl;
    } else {
        cout << "The pointer empty_str is valid, BUT the content it points to is '\\0', which is false." << endl;
    }
    
    // The key takeaway is that the pointer itself evaluates to true unless it's nullptr.

    return 0;
}