#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.2 Example: Dereferencing and Subscripting
    
    vector<int> ivec = {10, 20, 30, 40, 50};
    
    // The expression asks for the value of:
    // a) *(ivec.begin() + 1)
    // b) *(ivec.begin()) + 1
    
    // Expression A: Dereference the element one past the beginning.
    // Order: 
    // 1. ivec.begin() + 1 (Pointer addition) -> iterator to 20
    // 2. *(...) (Dereference) -> value 20
    int a = *(ivec.begin() + 1);
    
    // Expression B: Dereference the beginning element, then add 1 to the result.
    // Order: 
    // 1. ivec.begin() (Pointer to 10)
    // 2. *(ivec.begin()) (Dereference) -> value 10
    // 3. 10 + 1 (Integer addition) -> value 11
    int b = *ivec.begin() + 1; 

    // For comparison, let's use the subscript operator, which is often cleaner.
    int c = ivec[1]; // Subscripting is equivalent to expression (a)
    
    cout << "ivec: {10, 20, 30, 40, 50}" << endl;
    cout << "Result of *(ivec.begin() + 1) [Expression A]: " << a << " (Accesses element at index 1)" << endl;
    cout << "Result of *ivec.begin() + 1 [Expression B]: " << b << " (Accesses element at index 0, then adds 1)" << endl;
    cout << "Result of ivec[1] [Subscript C]: " << c << " (Equivalent to A)" << endl;

    return 0;
}