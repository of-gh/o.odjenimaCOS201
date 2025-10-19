#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    // Ask the user for input
    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    // Swap using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // Display swapped values
    cout << "\nAfter swapping:" << "\n";
    cout << "a = " << a << ", b = " << b << "\n";

    return 0;
}
