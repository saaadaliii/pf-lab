#include <iostream>
using namespace std;

int main() {
    int n = 5; // Height of the pyramid
    int num = 1; // Starting number
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}
