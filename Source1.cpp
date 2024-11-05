#include <iostream>
#include <string>
#include <Windows.h>
#include <cmath>
using namespace std;
int main() {
    cout << "Exercise Hello User" << endl;

    string name1;

    cout << "What is your name? ";
    cin >> name1;

    if (name1 == "Zahar") {
        cout << "Access denied!" << std::endl;
    }
    else {
        cout << "Hello, " << name1 << "!" << std::endl;
    }
    cout << "SWAP2" << endl;
    int a, b;

    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;

    cout << "A = " << a << ", B = " << b << endl;


    int helper = a;
    a = b;
    b = helper;

    cout << "Swap result is A = " << a << ", B = " << b << endl;
    int A, B, C;
    cout << "SWAP3" << endl;
    cout << "Enter A: ";
    cin >> A;
    cout << "Enter B: ";
    cin >> B;
    cout << "Enter C: ";
    cin >> C;

    cout << "A = " << A << ", B = " << B << ", C = " << C << endl;


    int helper1 = A;
    A = C;
    C = B;
    B = helper1;

    cout << "Swap result is A = " << A << ", B = " << B << ", C = " << C << endl;
    cout << "SWAP4" << endl;
    int A1, B1, C1, D;
    cout << "Enter A: ";
    cin >> A1;
    cout << "Enter B: ";
    cin >> B1;
    cout << "Enter C: ";
    cin >> C1;
    cout << "Enter D: ";
    cin >> D;

    cout << "A = " << A1 << ", B = " << B1 << ", C = " << C1 << ", D = " << D << endl;

    int helper2 = A1;
    A1 = B1;
    B1 = C1;
    C1 = D;
    D = helper2;

    cout << "Swap result is A = " << A1 << ", B = " << B1 << ", C = " << C1 << ", D = " << D << endl;

    cout << "HELLO JUNIOR" << endl;
    char name[20];
    int age;
    char placeofstudy[20];
    cout << "What is your name? = ";
    cin >> name;
    cout << "How older you? = ";
    cin >> age;
    cout << "where are you studying? = ";
    cin >> placeofstudy;
    cout << "Hello, " << name << endl;
    cout << "Greetings, all the best to you " << age << ", and you are already in a dialog with the computer!" << endl;
    cout << placeofstudy << "will be proud of you" << endl;

    cout << "Guess Magic Number" << endl;
    int result;
    cout << "Think of a number." << endl;
    cout << "Multiply it by 10." << endl;
    cout << "Divide the result by 2." << endl;
    cout << "Now add your original number to the result." << endl;
    cout << "Enter the final result: ";
    cin >> result;
    int originalNumber = (result) / 6;
    cout << "Your original number was: " << originalNumber << "!" << endl;
    return 0;
}
