#include <iostream>
using namespace std;

void reverseCharArray(char arr[], int n)
{
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        char temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    char str[] = {'H', 'e', 'l', 'l', 'o'};
    int n = sizeof(str) / sizeof(str[0]);

    reverseCharArray(str, n);

    for (int i = 0; i < n; i++)
        cout << str[i];

    return 0;
}
