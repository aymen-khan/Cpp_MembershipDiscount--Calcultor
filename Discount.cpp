#include <iostream>
using namespace std;

int main() {
    double BillAmount;
    cout << "Enter the bill amount: ";
    cin >> BillAmount;

    double Discount = 0;
    string membership;
    double FinalAmount = 0;

    cout << "Enter membership type (Premium / Regular / None): ";
    cin >> membership;

    // Apply discount based on membership type
    if (membership == "Premium" || membership == "premium") {
        cout << "Premium member: 20% discount applied." << endl;
        Discount = BillAmount * 0.20;
    }
    else if (membership == "Regular" || membership == "regular") {
        cout << "Regular member: 10% discount applied." << endl;
        Discount = BillAmount * 0.10;
    }
    else {
        cout << "No membership: No discount applied." << endl;
    }

    FinalAmount = BillAmount - Discount;
    cout << "Final amount to pay: " << FinalAmount << endl;

    return 0;
}

