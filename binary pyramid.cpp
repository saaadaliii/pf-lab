#include <iostream>
using namespace std;
int main() {
    int n = 8;  // Number of rows in the binary pyramid

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            
            if (j % 2 != 0) {
                cout << "1";  // Print 1 for odd positions
            } else {
                cout << "0";  // Print 0 for even positions
            }
        }
        cout << endl;  
    }

    return 0;
}

