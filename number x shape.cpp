#include <iostream>
using namespace std;

int main() {
    int n = 5;  // Number of rows

    // Outer loop for each row
    for (int i = 1; i <= n; i++) {
        // For rows 1, 2, 4, and 5, print the number at both ends
        if (i != 3) {
            cout << i << " ";  // Print the number at the left end
            cout << i;         // Print the number at the right end
        } 
        // For row 3, print the number at the center
        else {
            cout << i;  // Only print the number in the middle
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}

