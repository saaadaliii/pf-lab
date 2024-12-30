#include <iostream>
using namespace std;
int main() {
    int n = 5;  // The number of rows (size of the pyramid)

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}

