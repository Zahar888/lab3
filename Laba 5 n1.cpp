#include <iostream>
using namespace std;

int main() {
    cout << "Exercise1";
    int number, sum = 0;

    cout << "Enter a sequence of integers (0 to end):" << endl;

    cin >> number; 
    while (number != 0) {
        sum += number;
        cin >> number;

        cout << "SUM=" << sum << endl;
        return 0;

    }