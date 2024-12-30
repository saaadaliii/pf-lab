#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string userID, password;
    

    cout << "Enter your User ID: ";
    cin >> userID;

    
    switch (userID[0]) { 
        case 'A': // Example: ID starts with 'A'
            if (userID == "A123") {
                cout << "Enter your password: ";
                cin >> password;

        
                switch (password[0]) {
                    case 'p': 
                        if (password == "password123") {
                            cout << "Welcome, User A!" << endl;
                        } else {
                            cout << "Incorrect Password" << endl;
                        }
                        break;
                    default:
                        cout << "Incorrect Password" << endl;
                        break;
                }
            } else {
                cout << "Incorrect ID" << endl;
            }
            break;

        case 'B': 
            if (userID == "B456") {
                cout << "Enter your password: ";
                cin >> password;

                switch (password[0]) {
                    case 's': 
                        if (password == "secure123") {
                            cout << "Welcome, User B!" << endl;
                        } else {
                            cout << "Incorrect Password" << endl;
                        }
                        break;
                    default:
                        cout << "Incorrect Password" << endl;
                        break;
                }
            } else {
                cout << "Incorrect ID" << endl;
            }
            break;

        default:
            cout << "Incorrect ID" << endl;
            break;
    }

    return 0;
}

