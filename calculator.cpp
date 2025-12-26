#include <iostream>

using namespace std;

int main()
{
    cout << "-------------------------------------" << endl;
    cout << "|        Calculator v. 1.0           |" << endl;
    cout << "|            Filip Bak               |" << endl;
    cout << "-------------------------------------" << endl;

    double a, b;

start:

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    cout << "Which operation do you want to perform?" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;

    char operation;
    cin >> operation;

    switch (operation)
    {
        case '+':
            cout << a << " + " << b << " = " << (a + b) << endl;
            break;
        case '-':
            cout << a << " - " << b << " = " << (a - b) << endl;
            break;
        case '*':
            cout << a << " * " << b << " = " << (a * b) << endl;
            break;
        case '/':
            if (b != 0)
            {
                cout << a << " / " << b << " = " << (a / b) << endl;
            }
            else
            {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid operation!" << endl;
    }

    cout << "Do you want to continue? (t/n): ";
    cin >> operation;

    if (operation == 't' || operation == 'T')
        goto start;

    cout << "Thank you for using the calculator. See you!" << endl;

    return 0;
}
