#include <iostream>
using namespace std;
int main() {
    float num1, num2;
    char choice;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Select an operation:" << endl;
    cout << "a. Addition" << endl;
    cout << "b. Subtraction" << endl;
    cout << "c. Product" << endl;
    cout << "d. Divide" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
        case 'a':
        case 'A':
        cout << "Addition result: " << num1 + num2 << endl;
        break;
        case 'b':
        case 'B':
        cout << "Subtraction result: " << num1 - num2 << endl;
        break;
        case 'c':
        case 'C':
        cout << "Product result: " << num1 * num2 << endl;
        break;
        case 'd':
        case 'D':
        if (num2 != 0) {
        cout << "Division result: " << num1 / num2 << endl;
        } else {
        cout << "Cannot divide by zero!" << endl;
        }
        break;
        default:
        cout << "Invalid choice!" << endl;
    }
    return 0;
}
