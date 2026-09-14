#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i += 2) {
        if ((i % 4) == 1)
            sum += i * i;
        else
            sum -= i * i;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
