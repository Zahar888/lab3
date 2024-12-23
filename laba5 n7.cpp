#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n == 0) return 0; 
    if (n == 1) return 1; 

    int prev1 = 0; // Початкове значення f(0)
    int prev2 = 1; // Початкове значення f(1)
    int current = 0; // Поточне значення

    for (int i = 2; i <= n; i++) {
        current = prev1 + prev2; 
        prev1 = prev2;
        prev2 = current;
    }

    return current; 
}

int main() {
    int n;

    // Користувач вводить номер N
    cout << "Enter the position (N) to find Fibonacci number: ";
    cin >> n;

    if (n < 0) {
        cout << "The position must be a non-negative integer." << endl;
        return 1;
    }

    int result = fibonacci(n);

    cout << "Fibonacci(" << n << ") = " << result << endl;

    return 0;
}
