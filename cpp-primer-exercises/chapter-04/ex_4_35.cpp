#include <iostream>

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.35 Example: Implicit Conversions
    
    char cval = 'a';
    int ival = 50;
    unsigned int ui = 10;
    double dval = 3.14159;
    
    cout << "Initial values: cval='a', ival=50, ui=10, dval=3.14159" << endl;
    
    // ------------------------------------------
    // a) cval = ival;
    // ------------------------------------------
    // Assignment: int (ival=50) to char (cval).
    // Demotion (int to char): Potential loss of data if ival's value exceeds 
    // the max value of char. Since 50 is small, it safely converts to '2' (ASCII 50).
    cval = ival; 
    cout << "\na) cval = ival (50): cval is now '" << cval << "' (ASCII: " << (int)cval << ")" << endl;
    
    // ------------------------------------------
    // b) fval = dval; // Using fval as a float for analysis
    // ------------------------------------------
    // Assuming fval is a float (or a wider integer like long). We will use a float.
    float fval = 0.0f;
    // Assignment: double (dval) to float (fval).
    // Demotion (double to float): Potential loss of precision.
    fval = dval;
    cout << "b) fval = dval (3.14159): fval is now " << fval << " (Loss of precision)" << endl;
    
    // ------------------------------------------
    // c) dval = ival;
    // ------------------------------------------
    // Assignment: int (ival) to double (dval).
    // Promotion (int to double): Safe conversion. dval becomes 50.0.
    dval = ival;
    cout << "c) dval = ival (50): dval is now " << dval << endl;
    
    // ------------------------------------------
    // d) ival = dval;
    // ------------------------------------------
    // Assignment: double (dval=50.0) to int (ival).
    // Demotion (double to int): Truncation of the fractional part (50.0 becomes 50).
    ival = dval;
    cout << "d) ival = dval (50.0): ival is now " << ival << " (Truncation occurs)" << endl;

    return 0;
}