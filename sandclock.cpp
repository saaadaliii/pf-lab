#include <iostream>
using namespace std;

int main() {
    int n = 5; // Height of the sand clock
    for (int i = 0; i < n; i++) { // Upper part
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < (2 * (n - i)) - 1; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = n - 2; i >= 0; i--) { // Lower part
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < (2 * (n - i)) - 1; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
