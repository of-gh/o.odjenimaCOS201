#include <iostream>
using namespace std;

int main() {
    float amount, taxamount, total;

    // Ask the user for input
    cout << "Enter the total purchase amount ";
    cin >> amount;

    taxamount = (6/100)*amount
    total = taxamount + amount

    // Display amounts
    cout << "\nReceipt:" << "\n";
    cout << "Total Untaxed Amount = " << amount << "\n";
    cout << "Total Amount After Tax = " << total << "\n";

    return 0;

}