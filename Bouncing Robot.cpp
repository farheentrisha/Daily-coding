#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N, S, Q;
    cin >> N >> S >> Q;

    long long cycle = 2LL * (N - 1);

    while (Q--) {
        long long T;
        cin >> T;

        long long x = (S - 1 + T) % cycle;

        if (x <= N - 1)
            cout << x + 1 << '\n';
        else
            cout << cycle - x + 1 << '\n';
    }

    return 0;
}
