#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)   // Base case
        return 1;

    return n * factorial(n - 1);  // Recursive case
}

int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << "Factorial = " << factorial(n) << endl;

    return 0;
}/*
factorial(5)
= 5 × factorial(4)
= 5 × 4 × factorial(3)
= 5 × 4 × 3 × factorial(2)
= 5 × 4 × 3 × 2 × factorial(1)
= 5 × 4 × 3 × 2 × 1
= 120 */
