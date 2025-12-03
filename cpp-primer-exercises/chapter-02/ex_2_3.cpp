#include <iostream>

int main() {
    //Const Qualifiers
    const int const_value = 50;

    //Reference to const (cannot change const_value)
    const int &ref_const = const_value;

    //Pointer to const (cannot change const_value through the pointer)
    const int *ptr_const = &const_value;

    //Constant pointer (the pointer itself cannot be changed to point elsewhere)
    int changeable_value = 10;
    int *const const_ptr = &changeable_value;

    //Attempt to change the value through the constant pointer (ok)
    *const_ptr = 20;

    std::cout << "Const Value: " << const_value << std::endl;
    std::cout << "Value via Const Reference: " << ref_const << std::endl;
    std::cout << "Value via Const Pointer: " << *ptr_const << std::endl;
    std::cout << "Value via Constant Pointer (modified): " << changeable_value << std::endl;

    /*The following would be compile errors:
    const_value = 60; Error: const variable
    *ptr_const = 30; Error: pointer to const
    const_ptr = &const_value; Error: constant pointer (the pointer itself)
    */

    return 0;

}