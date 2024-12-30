#include <iostream>
using namespace std;
int main() {
    int n = 4;  // Number of rows
    int num = 1;  

    for (int i = 1; i <= n; i++) {
        // Inner loop to print numbers in each row
        for (int j = 1; j <= i; j++) {
            cout << num << " ";  
            num++;  
        }
        cout << endl;  
    }

    return 0;
}

