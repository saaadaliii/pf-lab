#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows
    int m = 5; // Number of columns
    int num = 1;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            
            for (int j = 1; j <= m; j++) {
                cout << num << " ";
                num++;
            }
        } else {
            
            int temp = num + m - 1;
            for (int j = 1; j <= m; j++) {
                cout << temp-- << " ";
                num++;
            }
        }
        cout << endl;
    }
    return 0;
}
