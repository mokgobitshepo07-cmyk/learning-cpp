#include <iostream>

int main() {
    //Pointers & references

    int value = 100;
    int &refValue = value;

    int *ptrValue = &value;

    //Change the value through the reference
    refValue = 200;

    std::cout << "Original Value: " << value << std::endl;
    std::cout << "Value through Pointer (*ptrValue): " << *ptrValue << std::endl;

    return 0;

}