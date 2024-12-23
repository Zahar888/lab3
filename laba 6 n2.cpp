#include <iostream>
using namespace std;

int main() {
    int size;
    double* arr;
    double max = 0;
    cout << "Enter size of array: ";
    cin >> size;
    arr = new double[size];
    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] / max;
    }

    cout << "Normalized array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

