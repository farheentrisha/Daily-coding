#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=n; i>=1; i--)
    {
       // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }

        cout<<"\n";

    }
}
