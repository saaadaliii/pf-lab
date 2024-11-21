#include<iostream>
using namespace std;
int main()
{
    int n = 5;

    for (int x = 1; x <= n; x++) {
        
        for (int y = 1; y <= n; y++) {
        
            if (x == 1 || x == n || y == 1 || y == n) {
                cout << "*";
            } else {
                cout << " "; 
            }
        }
        cout << endl;
    }

    return 0;
}

