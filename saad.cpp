#include <iostream>
using namespace std;

int main() {
    int n = 4; // Size of the spiral (4x4)
    int total = n * n; // Total numbers to print
    int num = 1;       // Starting number
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (num <= total) {
        // Top row: left to right
        for (int i = left; i <= right && num <= total; i++) {
            cout << num++ << " ";
        }
        cout << endl;
        top++; // Move the top boundary down

        // Right column: top to bottom
        for (int i = top; i <= bottom && num <= total; i++) {
            cout << num++ << " ";
        }
        cout << endl;
        right--; // Move the right boundary left

        // Bottom row: right to left
        for (int i = right; i >= left && num <= total; i--) {
            cout << num++ << " ";
        }
        cout << endl;
        bottom--; // Move the bottom boundary up

        // Left column: bottom to top
        for (int i = bottom; i >= top && num <= total; i--) {
            cout << num++ << " ";
        }
        cout << endl;
        left++; // Move the left boundary right
    }

    return 0;
}
