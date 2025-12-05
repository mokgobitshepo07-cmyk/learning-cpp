#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
    // C++ Primer, Chapter 3, Exercise 3.20 Example: Vector Pairing Calculations
    
    vector<int> ivec;
    int input_val;
    
    cout << "Enter a series of integers (Ctrl+D to stop input):" << endl;
    
    // Read integers into the vector
    while (cin >> input_val) {
        ivec.push_back(input_val); 
    }
    
    if (ivec.empty()) {
        cout << "No elements entered." << endl;
        return 0;
    }
    
    cout << "\n--- Part 1: Sum of Adjacent Elements ---" << endl;
    // Iterate through the vector, stopping before the last element
    for (decltype(ivec.size()) i = 0; i < ivec.size() - 1; ++i) {
        int sum = ivec[i] + ivec[i+1];
        cout << "Sum of " << ivec[i] << " and " << ivec[i+1] << " is: " << sum << endl;
    }
    
    if (ivec.size() % 2 != 0) {
        cout << "The last element (" << ivec.back() << ") has no pair." << endl;
    }

    cout << "\n--- Part 2: Sum of First/Last, Second/Second-to-Last ---" << endl;
    // Iterate from the beginning (i) and the end (j) simultaneously
    // We only need to iterate up to the middle of the vector (size / 2)
    for (decltype(ivec.size()) i = 0, j = ivec.size() - 1; i <= j; ++i, --j) {
        if (i == j) {
            // This is the middle element for vectors with an odd size
            cout << "Middle element (" << ivec[i] << ") has no pair." << endl;
        } else {
            int sum = ivec[i] + ivec[j];
            cout << "Sum of " << ivec[i] << " and " << ivec[j] << " is: " << sum << endl;
        }
    }

    return 0;
}