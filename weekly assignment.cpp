#include <iostream>
#include <string>

using namespace std;
int main() {
    int maxbook = 10;
    string book[10];
    int bookcount = 0;
    int choice;

    do{
    cout << "\nLibrary Management System\n";
    cout << "1. Add Book\n";
    cout << "2. View Books\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        if (bookcount >= maxbook) {
            cout << "Library is full! Cannot add more books.\n";
        }
        else {
            cout << "Enter book name: ";
            cin.ignore();  // To clear the buffer
            cin >> book[bookcount];
            bookcount++;
            cout << "Book added successfully.\n";
        }
        break;
    case 2:
        if (bookcount == 0) {
            cout << "No Book in library";
        }
        else {
            cout << "\nAvailable Books:\n";
            for (int i = 0; i < bookcount;i++) {
                cout << i + 1 << ". " << book[i] << endl;
            }
        }
        break;
 

    default:
        cout << "Enter a valid choice";
        break;
    }
    } while (choice != 5);


	return 0;
}
