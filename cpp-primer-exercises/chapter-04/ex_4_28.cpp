#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.28 Example: Printing Sizes of Built-in Types
    
    cout << "--- Size (in bytes) of Built-in Fundamental Types ---" << endl;
    
    // Character Types
    cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
    cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << endl;
    cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << endl;
    cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << endl;
    
    // Integer Types (Signed/Unsigned often have the same size)
    cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
    cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
    cout << "long:\t\t" << sizeof(long) << " bytes" << endl;
    cout << "long long:\t" << sizeof(long long) << " bytes" << endl;
    
    // Floating Point Types
    cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
    cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
    cout << "long double:\t" << sizeof(long double) << " bytes" << endl;
    
    // Boolean Type
    cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl;

    // Note: The actual sizes of 'short', 'int', 'long', and 'long long' are 
    // implementation-defined, but they must meet certain minimum size requirements.
    // On most modern systems: 
    // char=1, short=2, int=4, long=4 or 8, long long=8, float=4, double=8.

    return 0;
}