/*
Day 5 C++ Practice
Task: Implement decision-making in your code.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;

    cout << "|Choices for Arithmetic|" << endl;
    cout << "|1. Sum                |" << endl;
    cout << "|2. Subtract           |" << endl;
    cout << "|3. Multiplication     |" << endl;
    cout << "|4. Division           |" << endl;
    cout << "Input ka po: ";
    cin >> choice;

    double numDouble1, numDouble2;
    double sum = 0, diff = 0, prod = 0, div = 0;
    cout << endl << endl;
    cout << "USING IF STATEMENT" << endl;
    if (choice == 1) {
        cout << "Enter a number (1): ";
        cin >> numDouble1;
        cout << "Enter a number (2): ";
        cin >> numDouble2;

        sum = numDouble1 + numDouble2;
        cout << "\nSum of " << numDouble1 << " + " << numDouble2 << " = " << sum << endl << endl;
    }

    if (choice == 2) {
        cout << "Enter a number (1): ";
        cin >> numDouble1;
        cout << "Enter a number (2): ";
        cin >> numDouble2;

        diff = numDouble1 - numDouble2;
        cout << "\nSubtraction of " << numDouble1 << " - " << numDouble2 << " = " << diff << endl << endl;
    }

    if (choice == 3) {
        cout << "Enter a number (1): ";
        cin >> numDouble1;
        cout << "Enter a number (2): ";
        cin >> numDouble2;

        prod = numDouble1 * numDouble2;
        cout << "\nMultiplication of " << numDouble1 << " * " << numDouble2 << " = " << prod << endl << endl;
    }

    if (choice == 4) {
        cout << "Enter a number (1): ";
        cin >> numDouble1;
        cout << "Enter a number (2): ";
        cin >> numDouble2;

        if (numDouble2 != 0) {
            div = numDouble1 / numDouble2;
            cout << "\nDivision of " << numDouble1 << " / " << numDouble2 << " = " << div << endl;
        } else {
            cout << "\nError: Division by zero is not allowed!" << endl;
        }
        count << endl;
    }

    cout << "USING SWITCH STATEMENT" << endl;
    switch (choice) {
        case 1:
            cout << "Enter a number (1): ";
            cin >> numDouble1;
            cout << "Enter a number (2): ";
            cin >> numDouble2;

            sum = numDouble1 + numDouble2;
            cout << "\nSum of " << numDouble1 << " + " << numDouble2 << " = " << sum << endl << endl;
            break;
        case 2:
            cout << "Enter a number (1): ";
            cin >> numDouble1;
            cout << "Enter a number (2): ";
            cin >> numDouble2;

            diff = numDouble1 - numDouble2;
            cout << "\nSubtraction of " << numDouble1 << " - " << numDouble2 << " = " << diff << endl << endl;
            break;
        case 3:
            cout << "Enter a number (1): ";
            cin >> numDouble1;
            cout << "Enter a number (2): ";
            cin >> numDouble2;

            prod = numDouble1 * numDouble2;
            cout << "\nMultiplication of " << numDouble1 << " * " << numDouble2 << " = " << prod << endl << endl;
            break;
        case 4:
            cout << "Enter a number (1): ";
            cin >> numDouble1;
            cout << "Enter a number (2): ";
            cin >> numDouble2;

            if (numDouble2 != 0) {
                div = numDouble1 / numDouble2;
                cout << "\nDivision of " << numDouble1 << " / " << numDouble2 << " = " << div << endl;
            } else {
                cout << "\nError: Division by zero is not allowed!" << endl;
            }
            count << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
