#include<iostream>
using namespace std;
int main()
{
    int n = 5; // Number of rows for the pyramid

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
}
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
