#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2;

    cout << "\nSum = " << sum << "\n";
    cout << "Difference = " << difference << "\n";
    cout << "Product = " << product << "\n";

    return 0;
}
