#include <iostream>
#include <cmath>  // For sqrt() function
using namespace std;

int main() {
    int choice, number;

    // Display the menu
    cout << "Choose an option from the menu (1-4):\n";
    cout << "1. Calculate the square root of the number.\n";
    cout << "2. Calculate the cube of the number.\n";
    cout << "3. Print the number 50 times.\n";
    cout << "4. Print the multiplication table of the number.\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Input the number to perform operations on
    cout << "Enter the number: ";
    cin >> number;

    // Switch case based on the choice
    switch (choice) {
        case 1:
            // Calculate and print the square root
            if (number >= 0) {
                cout << "The square root of " << number << " is: " << sqrt(number) << endl;
            } else {
                cout << "Square root is not defined for negative numbers.\n";
            }
            break;

        case 2:
            // Calculate and print the cube
            cout << "The cube of " << number << " is: " << pow(number, 3) << endl;
            break;

        case 3:
            // Print the number 50 times
            cout << "Printing the number " << number << " 50 times:\n";
            for (int i = 1; i <= 50; i++) {
                cout << number << " ";
            }
            cout << endl;
            break;

        case 4:
            // Print the multiplication table of the number
            cout << "The multiplication table of " << number << " is:\n";
            for (int i = 1; i <= 10; i++) {
                cout << number << " * " << i << " = " << number * i << endl;
            }
            break;

        default:
            // Invalid choice
            cout << "Invalid choice. Please choose a valid option (1-4).\n";
            break;
    }

    return 0;
}


