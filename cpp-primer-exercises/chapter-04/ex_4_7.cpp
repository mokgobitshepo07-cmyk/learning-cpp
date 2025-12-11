#include <iostream>
#include <limits> // Required to get max values

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.7 Example: Integer Overflow
    
    // A standard int overflow results in UNDEFINED BEHAVIOR.
    // A standard unsigned int overflow is WELL-DEFINED (wraps around).
    
    cout << "--- Standard Integer Sizes ---" << endl;
    cout << "Max signed int value: " << std::numeric_limits<int>::max() << endl;
    
    // ----------------------------------------------------
    // 1. Signed Integer Overflow (Demonstrated with char)
    //    *Note: char is used here to trigger overflow easily.*
    // ----------------------------------------------------
    signed char sc = 127; // Max value for signed char is 127 (assuming 8-bit)
    
    cout << "\nSigned char before overflow: " << (int)sc << endl;
    
    // If we increment 127, it wraps to the minimum negative value (-128)
    sc++; 
    
    cout << "Signed char after overflow (127 + 1): " << (int)sc << endl;
    cout << "  -> RESULT: Undefined behavior if standard int, but often wraps to min value." << endl;
    
    // ----------------------------------------------------
    // 2. Unsigned Integer Overflow (Demonstrated with unsigned char)
    // ----------------------------------------------------
    unsigned char uc = 255; // Max value for unsigned char is 255
    
    cout << "\nUnsigned char before overflow: " << (int)uc << endl;
    
    // If we increment 255, it wraps to 0.
    uc++; 
    
    cout << "Unsigned char after overflow (255 + 1): " << (int)uc << endl;
    cout << "  -> RESULT: Defined behavior (wraps to 0)." << endl;

    return 0;
}