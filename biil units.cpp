#include <iostream>
using namespace std;
int main() {
    float currentReading, previousReading, unitsConsumed, totalBill, subsidy, surcharge;

    cout << "Enter the current reading (in units): ";
    cin >> currentReading;
    cout << "Enter the previous reading (in units): ";
    cin >> previousReading;

    unitsConsumed = currentReading - previousReading;

    if (unitsConsumed <= 300) {
        // Case 1: Units consumed are less than or equal to 300
        totalBill = unitsConsumed * 4;  
        subsidy = totalBill * 0.03;     
        totalBill -= subsidy;           
    } 
    else if (unitsConsumed >= 301 && unitsConsumed <= 400) {
        // Case 2: Units consumed between 301 and 400
        totalBill = unitsConsumed * 6;  // Rs. 6 per unit
    }
    else {
        // Case 3: Units consumed greater than 400
        totalBill = unitsConsumed * 7;  
        surcharge = totalBill * 0.04;   
        totalBill += surcharge;        
    }

    
    cout << "Total units consumed: " << unitsConsumed << " units\n";
    cout << "Total bill: Rs. " << totalBill << endl;

    return 0;
}
