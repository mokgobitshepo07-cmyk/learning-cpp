#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// Global scope arrays (Static storage duration):
// Guaranteed to be zero-initialized.
string sa[10];
int ia[10];

// Helper function to print an array (for verification)
void print_array(const auto arr[], const size_t size, const string& name) {
    cout << name << " (Size: " << size << ") = { ";
    for (size_t i = 0; i < size; ++i) {
        // Use a ternary operator to format the output nicely
        cout << (i > 0 ? ", " : "") << arr[i];
    }
    cout << "}" << endl;
}

int main() {
    // Local scope arrays (Automatic storage duration):
    // Built-in types (like int) are UNINITIALIZED (garbage values)
    // Class types (like string) are default initialized (empty string)
    string sa2[10];
    int ia2[10];

    // Output 1: Global arrays (Should be zero-initialized)
    cout << "--- Global Arrays (Static) ---" << endl;
    // For string: empty string ("")
    print_array(sa, 10, "Global string sa"); 
    // For int: 0
    print_array(ia, 10, "Global int ia");

    // Output 2: Local arrays (ia2 will contain garbage, sa2 will be empty strings)
    cout << "\n--- Local Arrays (Automatic) ---" << endl;
    // For string: empty string ("")
    print_array(sa2, 10, "Local string sa2");
    // For int: UNINITIALIZED (will show garbage/zero/unpredictable values)
    print_array(ia2, 10, "Local int ia2"); 

    return 0;
}