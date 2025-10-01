/*
Day 4 C++ Practice
Task: Understand arithmetic, assignment, and comparison operators.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numero1 = 17;
    int numero2 = 19;
    double div1 = 17;
    double div2 = 19;

    cout << "Arithmetic Operators" << endl;
    cout << "int 1: " << numero1 << endl;
    cout << "int 2: " << numero2 << endl;

    cout << "Sum: " << numero1 + numero2 << endl;
    cout << "Diff: " << numero1 - numero2 << endl;
    cout << "Product: " << numero1 * numero2 << endl;
    cout << "Division: " << div1 / div2 << endl;
    cout << "Remainder: " << numero1 % numero2 << endl;

    int sum = numero1 + numero2;
    int diff = numero1 - numero2;
    int prod = numero1 * numero2;
    double div = div1 / div2;
    int remain = numero1 % numero2;

    cout << "\nAssignment Operators" << endl;
    int resultInt;
    double resultDouble;

    resultInt = 0;
    cout << "Sum with += : " << (resultInt += sum) << endl;

    resultInt = 0;
    cout << "Diff with -= : " << (resultInt -= diff) << endl;

    resultInt = 1;
    cout << "Product with *= : " << (resultInt *= prod) << endl;

    resultDouble = 1.0;
    cout << "Division with /= : " << (resultDouble /= div) << endl;

    resultInt = 10;
    cout << "Remainder with %= : " << (resultInt %= remain) << endl;

    cout << "\nComparison Operators" << endl;
    cout << numero1 << " == " << numero2 << " : " << (numero1 == numero2) << endl;
    cout << numero1 << " != " << numero2 << " : " << (numero1 != numero2) << endl;
    cout << numero1 << " < "  << numero2 << " : " << (numero1 < numero2)  << endl;
    cout << numero1 << " > "  << numero2 << " : " << (numero1 > numero2)  << endl;
    cout << numero1 << " <= " << numero2 << " : " << (numero1 <= numero2) << endl;
    cout << numero1 << " >= " << numero2 << " : " << (numero1 >= numero2) << endl;

    return 0;
}
