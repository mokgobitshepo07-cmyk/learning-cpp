#include <iostream>

int main() {
    // C++ Primer, Chapter 2, Exercise 2.8 Example: Escape Sequences
    
    // The sequence '\n' represents a newline, '\t' represents a tab.
    
    // Print "2M" with the 'M' on a new line and indented by a tab.
    std::cout << "2\n\tM" << std::endl;
    
    // Example of other useful escape sequences:
    // \a - Alert (bell)
    // \b - Backspace
    // \\ - Backslash
    // \" - Double quote
    
    // Example using other escape sequences
    std::cout << "Alert!\a\tBackslash: \\" << std::endl;

    return 0;
}