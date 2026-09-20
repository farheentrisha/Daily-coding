#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    string reversestr = "";
    for (int i=str.length()-1; i>=0; i--)
    {
        reversestr +=str[i];
    }
    cout<<reversestr;
}
