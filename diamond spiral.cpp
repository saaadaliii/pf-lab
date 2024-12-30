#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows for the diamond
    int maxNum = n * 2 - 1; // Maximum number at the widest point
    int num = 1; // Starting number

    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        // Print numbers increasing
        for (int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }

        // Print numbers decreasing
        int temp = num - 2;
        for (int j = 1; j < i; j++) {
            cout << temp-- << " ";
        }
        cout << endl;
    }

    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        // Print numbers increasing
        for (int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }

        // Print numbers decreasing
        int temp = num - 2;
        for (int j = 1; j < i; j++) {
            cout << temp-- << " ";
        }
        cout << endl;
    }

    return 0;
}
