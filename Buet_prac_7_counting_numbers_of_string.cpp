#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    cin>>str;

    int counter= 0;
    bool isvalid=true;
    for (int i=0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if(ch == ' ' || ch == '\t' || ch =='\n')
        {
            isvalid =false;
        }
        else if(isvalid)
        {
            counter +=1;
        }
    }
    cout<<"number count is: "<<counter;
}
