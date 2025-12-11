#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.15 Example: Pointer and Array Assignment
    
    int ival = 1024;
    int *pi = &ival; // pi points to ival
    int **ppi = &pi; // ppi points to pi
    
    // Define an array (array name is NOT an assignable L-value)
    int ia[] = {0, 1, 2, 3, 4}; 
    
    cout << "Initial values: ival=" << ival << ", *pi=" << *pi << endl;
    
    // a) pi = ia;
    // VALID. Array name 'ia' decays to a pointer to its first element (R-value).
    // 'pi' is an L-value (assignable pointer).
    pi = ia;
    cout << "\nAfter pi = ia: *pi is now " << *pi << endl; // Should be 0
    
    // b) ppi = ia;
    // INVALID. 'ppi' is a pointer to a POINTER (int**). 
    // 'ia' decays to a pointer to an INT (int*). Types do not match.
    // ppi = ia; // Compiler Error: cannot convert 'int*' to 'int**' in assignment
    cout << "ppi = ia is INVALID (Type mismatch: int** vs int*)." << endl;
    
    // c) ival = pi;
    // INVALID. 'ival' is an int. 'pi' is a pointer. Cannot implicitly convert 
    // a pointer to a standard int (it requires an explicit cast).
    // ival = pi; // Compiler Error: cannot convert 'int*' to 'int' in assignment
    cout << "ival = pi is INVALID (Type mismatch: int vs int*)." << endl;

    // d) pi = ival;
    // INVALID. 'pi' is a pointer. 'ival' is an int. Cannot assign an int to a pointer 
    // without an explicit cast.
    // pi = ival; // Compiler Error: cannot convert 'int' to 'int*' in assignment
    cout << "pi = ival is INVALID (Type mismatch: int* vs int)." << endl;

    // e) ia = pi;
    // INVALID. 'ia' is an array name (a constant pointer-like value). 
    // Array names are NOT assignable L-values.
    // ia = pi; // Compiler Error: array type 'int [5]' is not assignable
    cout << "ia = pi is INVALID ('ia' is an array name and cannot be assigned to)." << endl;


    return 0;
}