#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <stdexcept>

using namespace std;

// Class to represent a menu item
class MenuItem {
public:
    string name;
    double price;

    MenuItem(string name, double price) {
        this->name = name;
        this->price = price;
    }
};

// Function to display the menu
void displayMenu(const vector<MenuItem>& menu) {
    cout << "\n**** Menu ****\n";
    for (int i = 0; i < menu.size(); i++) {
        cout << i + 1 << ". " << menu[i].name << " - $" << menu[i].price << endl;
    }
    cout << "**********\n";
}

// Function to calculate the total bill
double calculateTotal(const vector<MenuItem>& menu, const vector<int>& order) {
    double total = 0;
    for (int i = 0; i < order.size(); i++) {
        total += menu[order[i] - 1].price;
    }
    return total;
}

// Function to apply tax and discount
double applyTaxAndDiscount(double total) {
    double tax = total * 0.10; // 10% Tax
    double discount = (total > 50) ? total * 0.05 : 0; // 5% discount for total > $50
    return total + tax - discount;
}

// Function to handle the order input
void takeOrder(const vector<MenuItem>& menu, vector<int>& order) {
    int choice;
    while (true) {
        cout << "Enter the item number to add to your order (0 to finish): ";
        try {
            cin >> choice;
            if (cin.fail()) {
                throw invalid_argument("Invalid input. Please enter a valid number.");
            }
            if (choice == 0) {
                break;
            }
            if (choice < 1 || choice > menu.size()) {
                throw out_of_range("Invalid choice. Please select a valid item.");
            }
            order.push_back(choice);
        }
        catch (const invalid_argument& e) {
            
        }
        catch (const out_of_range& e) {
            cout << e.what() << endl;
        }
    }
}

// Function to save the order details to a file
void saveBillToFile(const vector<MenuItem>& menu, const vector<int>& order, double total, double finalAmount) {
    ofstream file("bill.txt");
    if (file.is_open()) {
        file << "**** Restaurant Bill ****\n";
        for (int i = 0; i < order.size(); i++) {
            file << menu[order[i] - 1].name << " - $" << menu[order[i] - 1].price << endl;
        }
        file << "-------------------------------------\n";
        file << "Subtotal: $" << total << endl;
        file << "Tax (10%): $" << total * 0.10 << endl;
        file << "Discount (5% for orders > $50): $" << (total > 50 ? total * 0.05 : 0) << endl;
        file << "Total: $" << finalAmount << endl;
        file << "*************\n";
        file.close();
        cout << "Bill saved to 'bill.txt'." << endl;
    } else {
        cout << "Unable to open file to save the bill." << endl;
    }
}

int main() {
    // Menu items
    vector<MenuItem> menu = {
        MenuItem("Burger", 5.99),
        MenuItem("Pizza", 8.99),
        MenuItem("Pasta", 7.99),
        MenuItem("Salad", 4.99),
        MenuItem("Soda", 1.99)
    };

    vector<int> order; // Vector to store user's order choices

    displayMenu(menu);
    takeOrder(menu, order);

    double total = calculateTotal(menu, order);
    double finalAmount = applyTaxAndDiscount(total);

    cout << "\nTotal Bill Details:\n";
    cout << "Subtotal: $" << fixed << setprecision(2) << total << endl;
    cout << "Tax (10%): $" << fixed << setprecision(2) << total * 0.10 << endl;
    cout << "Discount (5% for orders > $50): $" << fixed << setprecision(2) << (total > 50 ? total * 0.05 : 0) << endl;
    cout << "Total: $" << fixed << setprecision(2) << finalAmount << endl;

    saveBillToFile(menu, order, total, finalAmount);

    return 0;
}

