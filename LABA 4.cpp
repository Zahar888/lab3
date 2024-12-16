#include <iostream> 
#include <cmath> 


using namespace std;


int main() {

    int X;
    cout << "Exercise1";


    cout << "Enter number X: ";
    cin >> X;

    int moduleX;
    if (X < 0) {
        moduleX = -X;
    }
    else {
        moduleX = X;
    }


    cout << "|X| = |" << X << "| = " << moduleX << endl;

    cout << "Exercise2";
    int temperature;
    cout << "Enter the temperature (in Celsius): ";
    cin >> temperature;
    if (temperature < 0) {
        cout << "Output: Extremely cold: stay inside!" << endl;
    }
    else if (temperature >= 0 && temperature <= 15) {
        cout << "Output: Cold temperature: wear warm clothes!" << endl;
    }
    else if (temperature > 15 && temperature <= 25) {
        cout << "Output: Comfortable temperature: you can go outside." << endl;
    }
    else if (temperature > 25 && temperature <= 35) {
        cout << "Output: Warm temperature: stay hydrated." << endl;
    }
    else {
        cout << "Output: Extremely hot: avoid going outside!" << endl;
    }

    cout << "Exercise 3" << endl;
    int dayNumber;
    cout << "Enter a number (1-7): ";
    cin >> dayNumber;
    if (dayNumber == 1) {
        cout << "Monday" << endl;
    }
    else if (dayNumber == 2) {
        cout << "Tuesday" << endl;
    }
    else if (dayNumber == 3) {
        cout << "Wednesday" << endl;
    }
    else if (dayNumber == 4) {
        cout << "Thursday" << endl;
    }
    else if (dayNumber == 5) {
        cout << "Friday" << endl;
    }
    else if (dayNumber == 6) {
        cout << "Saturday" << endl;
    }
    else if (dayNumber == 7) {
        cout << "Sunday" << endl;
    }
    else {
        cout << "Invalid input. Please enter a number between 1 and 7." << endl;
    }
    cout << "Exercise 5" << endl;
    int startX, startY, endX, endY, figure;


    cout << "Enter the starting coordinates (X Y): ";
    cin >> startX >> startY;

    cout << "Enter the ending coordinates (X Y): ";
    cin >> endX >> endY;

    cout << "Choose a chess figure (1 - King, 2 - Queen, 3 - Rook, 4 - Bishop, 5 - Knight, 6 - Pawn): ";
    cin >> figure;


    if (figure == 1) {  // King
        if ((endX - startX >= -1 && endX - startX <= 1) && (endY - startY >= -1 && endY - startY <= 1))
            cout << "King can move to the selected position.\n";
        else
            cout << "Invalid move for King.\n";

    }
    else if (figure == 2) {  // Queen
        if (endX == startX || endY == startY || (endX - startX == endY - startY) || (startX - endX == endY - startY))
            cout << "Queen can move to the selected position.\n";
        else
            cout << "Invalid move for Queen.\n";

    }
    else if (figure == 3) {  // Rook
        if (endX == startX || endY == startY)
            cout << "Rook can move to the selected position.\n";
        else
            cout << "Invalid move for Rook.\n";

    }
    else if (figure == 4) {  // Bishop
        if ((endX - startX == endY - startY) || (startX - endX == endY - startY))
            cout << "Bishop can move to the selected position.\n";
        else
            cout << "Invalid move for Bishop.\n";

    }
    else if (figure == 5) {  // Knight
        if (((endX - startX == 2 || startX - endX == 2) && (endY - startY == 1 || startY - endY == 1)) ||
            ((endX - startX == 1 || startX - endX == 1) && (endY - startY == 2 || startY - endY == 2)))
            cout << "Knight can move to the selected position.\n";
        else
            cout << "Invalid move for Knight.\n";

    }
    else if (figure == 6) {  // Pawn
        if ((startX == endX && endY - startY == 1) || ((endX - startX == 1 || startX - endX == 1) && endY - startY == 1))
            cout << "Pawn can move to the selected position.\n";
        else
            cout << "Invalid move for Pawn.\n";

    }
    else {
        cout << "Invalid figure choice.\n";
    }

    return 0;
}