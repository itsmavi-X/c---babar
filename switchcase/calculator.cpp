#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the first operand: ";
    cin >> a;
    cout << "Enter the second operand: ";
    cin >> b;

    char ope;
    cout << "Enter the operator (+, -, *, /): ";
    cin >> ope;

    switch (ope) {
        case '+':
            cout << a << " + " << b << " = " << a + b << endl;
            break;
        case '-':
            cout << a << " - " << b << " = " << a - b << endl;
            break;
        case '*':
            cout << a << " * " << b << " = " << a * b << endl;
            break;
        case '/':
            if (b != 0)
                cout << a << " / " << b << " = " << static_cast<double>(a) / b << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Enter a valid operator." << endl;
    }

    return 0;
}
