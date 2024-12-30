#include <iostream>
using namespace std;

int main() {
    int n = 5;  // Number of rows in Pascal's Triangle
    int pascal[5][5];  // 2D array to store the triangle

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                pascal[i][j] = 1;
            } else {
            
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
            cout << pascal[i][j] << " ";  
        }
        cout << endl; 
    }

    return 0;
}

