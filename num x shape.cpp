#include <iostream>
using namespace std;

int main() {
    int n = 5; // Size of the pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == i || j == n - i + 1)
                cout << i << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
