#include <iostream>
using namespace std;

void reverseString(string &s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

int main() {
    string str = "hello";
    reverseString(str);
    cout << str;
    return 0;
}
//or
/*#include <iostream>
using namespace std;

string reverseString(string s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        swap(s[i], s[n - i - 1]);
    }
    return s;
}

int main() {
    string str = "hello";
    cout << reverseString(str);
    return 0;
}*/


