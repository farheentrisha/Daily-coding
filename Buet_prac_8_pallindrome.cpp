#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    int reverse_num =0 ;
    cin>>n;
     int original = n;
    int reminder;

    while(n>0)
    {
        reminder = n%10;
        reverse_num = reverse_num*10+reminder;
        n/=10;

    }
    cout<<"reverse string is: "<<reverse_num;

    if (original==reverse_num)
    {

        cout<<"palindrome";}
    else
    {cout<<"not palindrome";}

}
