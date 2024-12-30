#include <iostream>
#include <cmath>//for sqrt and complex handling
using namespace std;
int main() {

    double a, b, c ,disc , root1, root2;// Declare variables for the coefficients and roots
    
    cout << "Enter the coefficient a: ";
    cin >> a;
    cout << "Enter the coefficient b: ";
    cin >> b;
    cout << "Enter the coefficient c: ";
    cin >> c;
    
     disc = b * b - 4 * a * c;

    if (disc > 0) {
        // Roots are real and unequal
        double root1 = (-b + sqrt(disc)) / (2.0 * a);
        double root2 = (-b - sqrt(disc)) / (2.0 * a);
        cout << "Roots are real and unequal: root1 = " << root1 << ", root2 = " << root2 << endl;
    } else if (disc < 0) {
        // Roots are imaginary using complex number handling
        root1 = (-b + sqrt(-disc)) / (2.0 * a);
        root2 = (-b - sqrt(-disc)) / (2.0 * a);
        cout << "Roots are imaginary: root1 = " << root1 << ", root2 = " << root2 << endl;
    } else {
        // Roots are real and equal
        double root1 = root2 = -b / (2.0 * a);
        cout << "Roots are real and equal: root1 = root2 = " << root1 << endl;
    }

    return 0;
}

