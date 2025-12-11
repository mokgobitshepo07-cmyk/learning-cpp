#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    // C++ Primer, Chapter 4, Exercise 4.20 Example: Iterator Expression Analysis
    
    // Vector of strings: Iterators point to a string object.
    vector<string> text = {"C++", "Primer", "Fifth", "Edition"};
    
    // Iterator pointing to the first element ("C++")
    auto iter = text.begin(); 
    
    cout << "Initial value: *iter = " << *iter << endl;
    
    // ------------------------------------------
    // a) *iter++
    // ------------------------------------------
    // 1. Returns a copy of the value pointed to by iter ("C++").
    // 2. Increments iter to point to the next element ("Primer").
    cout << "\n--- Expression a) *iter++ ---" << endl;
    cout << "Returns: " << *iter++ << endl;
    cout << "Side effect: iter points to: " << *iter << endl;
    
    // ------------------------------------------
    // b) (*iter)++ 
    // ------------------------------------------
    // 1. Dereferences iter to get the string object ("Primer").
    // 2. Tries to call the string object's postfix increment operator (++).
    // The string class does NOT have an increment operator.
    // This expression is INVALID (Compiler Error).
    // iter = text.begin() + 1; // Reset iter for simulation
    // (*iter)++; // ERROR
    cout << "\n--- Expression b) (*iter)++ ---" << endl;
    cout << "Status: INVALID. std::string does not have a postfix increment operator." << endl;

    // ------------------------------------------
    // c) *iter.empty()
    // ------------------------------------------
    // 1. Dot operator (.) has HIGHER precedence than dereference (*).
    // 2. It tries to call iter.empty(). Iterators do not have an .empty() member function.
    // This expression is INVALID (Compiler Error).
    cout << "\n--- Expression c) *iter.empty() ---" << endl;
    cout << "Status: INVALID. Precedence groups it as *(iter.empty()). Iterators don't have .empty()." << endl;

    // ------------------------------------------
    // d) iter->empty()
    // ------------------------------------------
    // 1. Arrow operator (->) is equivalent to (*iter).empty().
    // 2. It dereferences the iterator, and calls the empty() member function on the resulting string object.
    // This expression is VALID. Returns a boolean (0 or 1).
    iter = text.begin() + 1; // Reset iter to "Primer"
    cout << "\n--- Expression d) iter->empty() ---" << endl;
    cout << "Result (is 'Primer' empty?): " << iter->empty() << " (0: False)" << endl; 
    
    // ------------------------------------------
    // e) ++*iter
    // ------------------------------------------
    // 1. Dereference (*) has lower precedence than prefix increment (++).
    // 2. The expression is grouped as ++(*iter).
    // 3. Tries to call the string object's prefix increment operator (++).
    // The string class does NOT have an increment operator.
    // This expression is INVALID (Compiler Error).
    // ++*iter; // ERROR
    cout << "\n--- Expression e) ++*iter ---" << endl;
    cout << "Status: INVALID. Precedence groups it as ++(*iter). std::string does not have a prefix increment operator." << endl;


    return 0;
}