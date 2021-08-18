#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    int u=0,l=0;
    cin>>s;
    int i=0;
    while(s[i]!='\0')
    {
        if(islower(s[i]))++l;
        else ++u;

        ++i;
    }
    if(l>u||l==u)
    {
        i=0;
        while(s[i]!='\0')
        {
            char c = tolower(s[i]);
            cout<<c;
            ++i;
        }
    }
    else
    {
        i=0;
        while(s[i]!='\0')
        {
            char c = toupper(s[i]);
            cout<<c;
            ++i;
        }
    }
}