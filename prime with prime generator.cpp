#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 100;
    bool prime[n+1];

    prime[0] = prime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }


    cout << "Prime numbers from 1 to 100:" << endl;
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

