#include <iostream>
using namespace std;

int main() {
    int n = 5;  // Number of rows

    for (int i = n; i >= 1; i--) {
        for (int j = 5; j >= 6 - i; j--) {
            cout << j;  
        }
        cout << endl;  
    }

    return 0;
}

