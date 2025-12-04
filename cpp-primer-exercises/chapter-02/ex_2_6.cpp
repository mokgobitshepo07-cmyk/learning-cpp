#include <iostream>

int main() {
    //Initialization vs. Assignment

    //1.Initialization: Giving an object its first value at the moment of definition
    int i = 50;
    int j = i; //j is initialized with the value of i

    //Reference MUST be initialized at definition. This valid initialization.
    int &r = i;
    //the following would be a compile error (reference MUST be initialized)
    //int &r2;

    //2.Assignment to a reference changes the value of the object it refers to.
    r = 200;

    //Assignment to j only changes j's value
    j = 300;

    std::cout << "i (via reference 'r'): " << r << std::endl;
    std::cout << "j (separate variable): " << j << std::endl;

    return 0;
}