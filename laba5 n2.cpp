

#include <iostream>
using namespace std;
int main() {
    cout << "Exercise2";
    int number1;
    int odd = 0;

    cout << "Enter numbers (0 to stop):" << endl;

    cin >> number1;
    while (number1 != 0) {
        if (number1 % 2 != 0) {
            odd++;
        }
        cin >> number1;
    }

    cout << "There were " << odd << " odd numbers." << endl;
    cout << "Exercise3";
    string input;
    while (true) {
        cout << "Enter a word: ";
        cin >> input;

        if (input == "Bye" || input == "Good" || input == "Farewell") {
            break;
        }
        cout << "You entered: " << input << endl;
    }
    cout << "Program ended. Goodbye!" << endl;
    cout << "Exercise4";
    int N;
    cout << "Enter the size of the sequence (a natural number): ";
    cin >> N;

    if (N <= 0) {
        cout << "The size of the sequence must be a natural number!" << endl;
        return 1;
    }

    int maxValue;
    cout << "Enter " << N << " integers:" << endl;

    cout << "a[1] = ";
    cin >> maxValue;

    for (int i = 2; i <= N; i++) {// Починається с другого бо перше вже введено
        int number;
        cout << "a[" << i << "] = ";
        cin >> number;
        if (number > maxValue) {
            maxValue = number;
        }
    }

    cout << "MAX = " << maxValue << endl;
    cout << "Exercise5";
    int choice;

    do {
        cout << "Program MENU:\n";
        cout << "1. News of the Day\n";
        cout << "2. Joke of the Week\n";
        cout << "3. About Author\n";
        cout << "0. Exit\n";
        cout << "Enter the appropriate number and click ENTER: ";
        cin >> choice;

        if (choice == 1) {
            cout << "\nNews of the Day: The weather is sunny today!\n" << endl;
        }
        else if (choice == 2) {
            cout << "\nFirst snake: I hope I’m not poisonous Second snake : Why?First snake : Because I bit my lip!\n" << endl;
        }
        else if (choice == 3) {
            cout << "\nAbout Author: This program was created by Ilchuk Zahar,17 years old !\n" << endl;
        }
        else if (choice == 0) {
            cout << "\nExiting the program. Goodbye!\n";
        }
        else {
            cout << "\nInvalid choice. Please try again.\n" << endl;
        }
    } while (choice != 0);
    cout << "Exercise6";
    int N1;
    cout << "Enter N = ";
    cin >> N1;

    if (N1 <= 0) {
        cout << "Please enter a natural number greater than 0." << endl;
    }
    else {
        for (int i = 1; i <= N1; i++) {
            cout << i;
            if (i < N1) {
                cout << ", ";
            }
        }
    }
