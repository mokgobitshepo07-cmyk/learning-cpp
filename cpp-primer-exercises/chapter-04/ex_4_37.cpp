#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.37 Example: Replacing C-Style Casts
    
    // Variables for analysis
    int i = 10;
    const string s = "hello";
    const char *pc = s.c_str(); // pc is a const char*
    void *pv;                   // pv is a void*
    
    // --- Original C-Style Casts ---
    
    // a) pv = (void*)pc;
    // Conversion of a non-void pointer type (const char*) to void*
    
    // b) i = (int)*pc;
    // Conversion of a char ('h') to int
    
    // c) pv = &d; 
    // This is not a cast example, but for completeness, assume we have a double d:
    double d = 3.14;
    // i = (int)d; // Conversion of double to int (truncation)

    
    // --- Rewritten using C++ Named Casts ---
    
    // a) Replacement for pv = (void*)pc;
    // Casting away constness OR casting to a different pointer type.
    // If we only want to convert pointer type safely (void* to const char*), static_cast works:
    // pv = static_cast<void*>(pc); // ERROR: static_cast can't cast away constness.
    
    // To cast away constness (from const char* to char*) and then implicitly to void*:
    pv = static_cast<void*>(const_cast<char*>(pc)); // Requires two casts for safety/correctness
    cout << "a) pv = static_cast<void*>(const_cast<char*>(pc)); // Low-level/const-modifying pointer conversion" << endl;
    
    // b) Replacement for i = (int)*pc;
    // Simple numeric conversion (char to int).
    i = static_cast<int>(*pc);
    cout << "b) i = static_cast<int>(*pc); // Numeric conversion (char 'h' to int 104)" << endl;
    cout << "   Result i: " << i << endl;
    
    // c) Replacement for i = (int)d;
    // Conversion of floating point to integer (truncation).
    i = static_cast<int>(d);
    cout << "c) i = static_cast<int>(d); // Floating-point to integer conversion (3.14 to 3)" << endl;
    cout << "   Result i: " << i << endl;

    return 0;
}