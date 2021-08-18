#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i;
    cin>>s;
    i=0;
    while (s[i]!='\0')
    {
        if(s[i]=='.')
        {
            cout<<"0";
            ++i;
        }
        else if(s[i]=='-')
        {
            if(s[i+1]=='.')
            {
                cout<<"1";
                i+=2;
            }
            else
            {
                cout<<"2";
                i+=2;
            }
        }
        
    }
    return 0;
}

