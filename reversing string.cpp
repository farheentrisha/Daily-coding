#include <iostream>

void reverse(char arr[], int n) {
    int i = 0, j = n - 1;
    while (i < j) {
        char t = arr[i];      // single scalar, not an array
        arr[i] = arr[j];
        arr[j] = t;
        i++;
        j--;
    }
}

int main() {
    char s[] = "BUET";
    int n = 0;
    while (s[n] != '\0') n++;   // own strlen, no library call
    reverse(s, n);
    std::cout << s << std::endl;   // TEUB
    return 0;
}
