#include <iostream>

int main() {
    //Initialization

    //1.Basic initialization
    int a = 10;
    int b(20); //Direct initialization(using parentheses)
    int c{30}; //List initialization(using braces - Modern C++)

    //2.Initialization of a reference(Must be initialized)
    int &refA = a;

    //3.Initialization of a pointer(Can be uninitialized, but should be set to nullptr)
    int *ptrB = &b;
    int *ptrNull = nullptr; //Recommended way to initialize a pointer that points to nothing

    //4.Initialization of a const reference(can bind to a non-const object or a literal)
    const int &refConst = 40;

    std::cout << "a (copy initialized): " << a << std::endl;
    std::cout << "b (direct initialized): " << b << std::endl;
    std::cout << "c (list initialized): " << c << std::endl;
    std::cout << "refA (references a): " << refA << std::endl;
    std::cout << "Value via ptrB: " << *ptrB << std::endl;
    std::cout << "refConst (from literal): " << refConst << std::endl;
    //std::cout << *ptrNull << std::endl; Do not dereference nullptr!!!

    return 0;
}