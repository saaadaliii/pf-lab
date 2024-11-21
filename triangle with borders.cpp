#include<iostream>
using namespace std;
int main()
{
	
    int n = 5; // Height of the triangle (odd number for symmetry)

    // Outer loop for each row
    for (int i = 1; i <= n; i++) {
        // Inner loop for spaces before stars
        for (int j = 1; j <= n - i; j++) {
            cout << " ";  // Print spaces for alignment
        }

        // Inner loop for columns in each row
        for (int j = 1; j <= (2 * i - 1); j++) {
            // Print '*' at the border or the last row
            if (j == 1 || j == (2 * i - 1) || i == n) {
                cout << "*";
            } else {
                cout << " ";  // Print space for the hollow part
            }
        }
        
        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}

	
