#include <iostream>
#include <iomanip> // For setting output precision

int main() {
    // C++ Primer, Chapter 2, Exercise 2.7 Example: Literal Types
    
    // 1. Integer Literals
    // Decimal (Base 10) - Type: int (usually)
    int dec_val = 20;
    
    // Octal (Base 8, starts with 0)
    int oct_val = 024; // This is 20 in decimal
    
    // Hexadecimal (Base 16, starts with 0x)
    int hex_val = 0x14; // This is 20 in decimal

    // 2. Floating-Point Literals
    // Default Type: double
    double dbl_val = 3.14159; 
    
    // Suffix 'f' or 'F' makes it a float
    float flt_val = 3.14159f; 
    
    // Suffix 'l' or 'L' makes it a long double
    long double ldbl_val = 3.14159L; 
    
    // 3. Character and String Literals
    char char_val = 'A';
    const char* str_val = "Hello\n"; // \n is an escape sequence

    // Output all values
    std::cout << std::fixed << std::setprecision(5);

    std::cout << "Dec Value: " << dec_val << std::endl;
    std::cout << "Octal Value (024): " << oct_val << std::endl;
    std::cout << "Hex Value (0x14): " << hex_val << std::endl;
    std::cout << "Double Value (Default): " << dbl_val << std::endl;
    std::cout << "Float Value ('f' suffix): " << flt_val << std::endl;
    std::cout << "Long Double Value ('L' suffix): " << ldbl_val << std::endl;
    std::cout << "Character Value: " << char_val << std::endl;
    std::cout << "String Value: " << str_val << std::endl;
    
    return 0;
}