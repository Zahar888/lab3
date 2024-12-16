#include <iostream> 

using namespace std;

int main() {
cout << "Exercise 3" << endl;
// Correct password: FR-33-DOM
char inputChar1, inputChar2, inputChar3, inputChar4, inputChar5, inputChar6, inputChar7, inputChar8, inputChar9;

cout << "Enter the password one character at a time:\n";
cout << "Enter character 1: ";
cin >> inputChar1;
if (inputChar1 != 'F') {
    cout << "Incorrect password. Please try again later." << endl;
    return 0;
}

cout << "Enter character 2: ";
cin >> inputChar2;
if (inputChar2 != 'R') {
    cout << "Incorrect password. Please try again later." << endl;
    return 0;
}

cout << "Enter character 3: ";
cin >> inputChar3;
if (inputChar3 != '-'){
    cout << "Incorrect password. Please try again later." << endl;
    return 0;
}

cout << "Enter character 4: ";
cin >> inputChar4;
if (inputChar4 != '3') {
    cout << "Incorrect password. Please try again later." << endl;
    return 0;
}

cout << "Enter character 5: ";
cin >> inputChar5;
if (inputChar5 != '3') {
    cout << "Incorrect password. Please try again later." << endl;
    return 0;
}

cout << "Enter character 6: ";
cin >> inputChar6;
if (inputChar6 != '_') {
    {
        cout << "Incorrect password. Please try again later." << endl;
        return 0;
    }

    cout << "Enter character 7: ";
    cin >> inputChar7;
    if (inputChar7 != 'D') {
        cout << "Incorrect password. Please try again later." << endl;
        return 0;
    }

    cout << "Enter character 8: ";
    cin >> inputChar8;
    if (inputChar8 != '0') {
        cout << "Incorrect password. Please try again later." << endl;
        return 0;
    }

    cout << "Enter character 9: ";
    cin >> inputChar9;
    if (inputChar9 != 'M') {
        cout << "Incorrect password. Please try again later." << endl;
        return 0;
    }
    cout << "\nThe door has been unlocked! You are free!" << endl;
}
