#include <iostream>
using namespace std;
int main() {
    int n = 5;  // Number of rows in the alphabet triangle
    
    for (int i = 1; i <= n; i++) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch;
        }
        cout << endl;  
    }

    return 0;
}

