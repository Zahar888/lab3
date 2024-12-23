#include <iostream>
using namespace std;
int sum(int a, int b) {
    return a + b;
}
bool isPrime(int n) {
    for (int i = 2; i < n; i++) {
        // Перевіряємо, чи ділиться n на i без залишку
        if (n % i == 0) {
            // Якщо знайшли хоча б один дільник, крім 1 і самого числа, воно не є простим
            return false;
        }
    }
    return true;
}


int factorial(int n) {
    if (n == 0 || n == 1) return 1; 
    return n * factorial(n - 1); 
}

int main() {
    // Sum
    cout << "Task 1: Sum" << endl;
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Sum: " << sum(num1, num2) << endl;

    //  isPrime
    cout << "\nTask 2: isPrime" << endl;
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
    }
    else {
        cout << n << " is not a prime number." << endl;
    }

    //  Factorial
    cout << "\nTask 3: Factorial" << endl;
    int factNum;
    cout << "Enter a non-negative integer: ";
    cin >> factNum;
    if (factNum < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else {
        cout << "Factorial of " << factNum << " is " << factorial(factNum) << endl;
    }

    return 0;
}
