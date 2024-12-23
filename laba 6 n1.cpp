#include <iostream>
using namespace std;

int main() {
    const int SIZE = 20; 
    int arr[SIZE];       
    int numberToFind;    
    int index = -1;      

    
    cout << "Enter 20 numbers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i]; 
    }

    
    cout << "Enter a number to search: ";
    cin >> numberToFind;

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == numberToFind) {
            index = i; 
            break;     
        }
    }
    if (index != -1) {
        cout << "Number found on index: " << index << endl;
    }
    else {
        cout << "Such a number has not been found in the array." << endl;
    }

    return 0;
}