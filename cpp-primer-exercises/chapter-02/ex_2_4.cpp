#include <iostream>

int main() {
    //Type aliases
    //Using declaration (Modern C++ type alias)

    using size_t = unsigned int;

    //Declare a const variable & a pointer using the alias
    const size_t max_items = 500;

    //Declare a regular size_t variable
    size_t item_count = 0;

    //Use the alias in a function argument (simulated)
    //Here we'll just demostrate the assignment
    item_count = max_items;

    //Use the pointer type that might be defined using an alias
    //Note: If 'size_t' was defined via 'typedef', the rules for const
    //Pointers can sometimes be tricky, but using 'using' makes it clearer.

    std::cout << "Maximum items allowed: " << max_items << std::endl;
    std::cout << "Current item count: " << item_count << std::endl;

    return 0;
}