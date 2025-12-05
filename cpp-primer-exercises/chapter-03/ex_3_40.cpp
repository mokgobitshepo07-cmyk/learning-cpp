#include <iostream>
#include <cstring> // Required for strcpy() and strcat()
#include <cstddef> // Required for size_t

using std::cout;
using std::endl;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.40 Example: C-Style String Concatenation
    
    // 1. Define the two source C-style strings
    const char cs1[] = "Hello ";
    const char cs2[] = "World!";
    
    // 2. Calculate the required size for the resulting array.
    // Length is cs1 length (6) + cs2 length (6) + 1 (for the null terminator '\0')
    const size_t len1 = std::strlen(cs1);
    const size_t len2 = std::strlen(cs2);
    const size_t total_size = len1 + len2 + 1;
    
    // 3. Define the destination array with sufficient size
    char result_cs[total_size];
    
    // 4. Copy the first string into the destination using strcpy()
    // It is critical that the destination (result_cs) is large enough.
    std::strcpy(result_cs, cs1);
    
    // 5. Concatenate the second string onto the end of the first using strcat()
    std::strcat(result_cs, cs2);
    
    cout << "String 1: " << cs1 << endl;
    cout << "String 2: " << cs2 << endl;
    cout << "Concatenated String: " << result_cs << endl;
    cout << "Total size used: " << total_size << endl;

    return 0;
}