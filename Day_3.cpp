/*
Day 3 C++ Practice
Task: Practice reading user input and displaying output.
*/

// Add your code below...
#include <iostream>
#include <string>
using namespace std;

int main() {

    cout << "Enter your section: ";
    string section;
    getline(cin, section);

    cout << "Enter your fav subject: ";
    string fav;
    getline(cin, fav);

    cout << "Enter your grade level: ";
    int grade;
    cin >> grade;

    cout << "Enter your rank: ";
    char rank;
    cin >> rank;

    cout << "My section: " << section << endl;
    cout << "Favorite subject: " << fav << endl;
    cout << "My grade level: " << grade << endl;
    cout << "My rank: " << rank << endl;

    return 0;
}