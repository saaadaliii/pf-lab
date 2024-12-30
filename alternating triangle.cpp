#include <iostream>
using namespace std;

int main() {
    int n = 5;  // Number of rows in the alternating triangle

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
    
            if (j % 2 != 0) {
                cout << "1";  // Print 1 if j is odd
            } else {
                cout << "0";  // Print 0 if j is even
            }
        }
        cout << endl;  
    }

    return 0;
}

