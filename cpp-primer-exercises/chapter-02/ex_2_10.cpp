#include <iostream>

// Global scope: these variables are defined outside any function
std::string global_str; // Default initialized to an empty string
int global_int;         // Default initialized to 0

int main() {
    // Local scope: these variables are defined inside main
    int global_int = 5; // Local variable hides the global variable of the same name
    std::string local_str = "local";

    // 1. Output the local variables
    std::cout << "Local int: " << global_int << std::endl;
    std::cout << "Local string: " << local_str << std::endl;

    // 2. Output the hidden global variables using the scope resolution operator (::)
    std::cout << "Global int: " << ::global_int << std::endl;
    std::cout << "Global string: " << ::global_str << std::endl;

    return 0;
}