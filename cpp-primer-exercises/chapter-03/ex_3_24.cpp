#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.24 Example: Full Iterator Implementation
    
    vector<int> ivec;
    int input_val;
    
    cout << "Enter a series of integers (Ctrl+D to stop input):" << endl;
    while (cin >> input_val) {
        ivec.push_back(input_val); 
    }
    
    if (ivec.empty()) {
        cout << "No elements entered." << endl;
        return 0;
    }
    
    // ----------------------------------------------------------------------
    // Part 1: Sum of Adjacent Elements using Iterators
    // ----------------------------------------------------------------------
    cout << "\n--- Part 1: Sum of Adjacent Elements ---" << endl;
    
    // The loop stops when 'it + 1' would equal or exceed the end iterator.
    for (auto it = ivec.begin(); it + 1 != ivec.end(); ++it) {
        auto next_it = it + 1;
        int sum = *it + *next_it;
        cout << "Sum of " << *it << " and " << *next_it << " is: " << sum << endl;
    }
    
    if (ivec.size() % 2 != 0) {
        cout << "The last element (" << ivec.back() << ") has no pair." << endl;
    }

    // ----------------------------------------------------------------------
    // Part 2: Sum of First/Last, Second/Second-to-Last using Iterators
    // ----------------------------------------------------------------------
    cout << "\n--- Part 2: Sum of Opposite-End Elements ---" << endl;
    
    // 'it_front' starts at begin(), 'it_back' starts at the last element (end() - 1)
    // Loop continues while the front iterator has not met or passed the back iterator.
    for (auto it_front = ivec.begin(), it_back = ivec.end() - 1; 
         it_front <= it_back; 
         ++it_front, --it_back) {
        
        if (it_front == it_back) {
            // Middle element for odd size vectors
            cout << "Middle element (" << *it_front << ") has no pair." << endl;
        } else {
            int sum = *it_front + *it_back;
            cout << "Sum of " << *it_front << " and " << *it_back << " is: " << sum << endl;
        }
    }

    return 0;
}