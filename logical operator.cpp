#include <iostream>
using namespace std;

int main() {
    int a, b;
    bool condition1, condition2;

    // Input two integer values from the user
    cout << "Enter two integer values for a and b: ";
    cin >> a >> b;

    // Logical AND (&&) Operator
    if (a > 0 && b > 0) {
        cout << "Both a and b are positive numbers.\n";
    } else {
        cout << "Either a or b (or both) are not positive numbers.\n";
    }

    // Logical OR (||) Operator
    if (a > 0 || b > 0) {
        cout << "At least one of a or b is positive.\n";
    } else {
        cout << "Neither a nor b is positive.\n";
    }

    // Logical NOT (!) Operator
    condition1 = (a > 0);  // Checks if 'a' is positive
    condition2 = (b < 0);  // Checks if 'b' is negative
    
    if (!(condition1 && condition2)) {  // Checks if it's NOT true that 'a' is positive AND 'b' is negative
        cout << "It is NOT true that 'a' is positive AND 'b' is negative.\n";
    } else {
        cout << "It is true that 'a' is positive AND 'b' is negative.\n";
    }

    // Conditional Operator (Ternary Operator)
    cout << "Using conditional operator (ternary):\n";
    // Checks if a is greater than b and assigns the result to the result variable
    string result = (a > b) ? "a is greater than b" : "a is not greater than b";
    cout << result << endl;

    // Using AND (&&) in a conditional expression
    if ((a > 10) && (b > 5)) {
        cout << "Both a is greater than 10 AND b is greater than 5\n";
    } else {
        cout << "Either a is not greater than 10 OR b is not greater than 5\n";
    }

    // Using OR (||) in a conditional expression
    if ((a < 5) || (b < 5)) {
        cout << "Either a is less than 5 OR b is less than 5\n";
    } else {
        cout << "Neither a is less than 5 nor b is less than 5\n";
    }

    // Using NOT (!) in a conditional expression
    if (!(a == b)) {
        cout << "a and b are NOT equal.\n";
    } else {
        cout << "a and b are equal.\n";
    }

    return 0;
}


