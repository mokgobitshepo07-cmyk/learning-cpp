#include <iostream>

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.5 Example: Division and Modulo with Negatives
    
    // a) -30 / 3 * 21 % 4
    // 1. -30 / 3 = -10 (Integer division truncates toward zero)
    // 2. -10 * 21 = -210
    // 3. -210 % 4 = -2 (The remainder takes the sign of the dividend, -210)
    int a = -30 / 3 * 21 % 4; 
    
    // b) -30 / 3 * 21 % 4
    // This is the same as (a), but often repeated to test understanding.
    int b = -30 / 3 * 21 % 4; 
    
    // c) 30 / 3 * 21 % 4
    // 1. 30 / 3 = 10
    // 2. 10 * 21 = 210
    // 3. 210 % 4 = 2 
    int c = 30 / 3 * 21 % 4;
    
    // d) -21 % -5
    // 1. -21 / -5 = 4 (truncates toward zero)
    // 2. -21 = 4 * (-5) + remainder
    // 3. -21 = -20 + (-1) -> remainder is -1
    // The remainder takes the sign of the dividend (-21).
    int d = -21 % -5; 
    
    cout << "a) -30 / 3 * 21 % 4 evaluates to: " << a << endl;
    cout << "b) -30 / 3 * 21 % 4 evaluates to: " << b << endl;
    cout << "c) 30 / 3 * 21 % 4 evaluates to: " << c << endl;
    cout << "d) -21 % -5 evaluates to: " << d << endl;

    return 0;
}