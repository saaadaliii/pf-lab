#include <iostream>
using namespace std;
int main() {
    int n = 5;  // Number of rows in Pascal's Triangle

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                cout << "1 ";
            } else{
                 cout << " ";            
            }
        }
        cout << endl;  
    }

    return 0;
}

