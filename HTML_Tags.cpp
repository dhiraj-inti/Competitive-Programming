#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int i=0,len=s.size(),c=0,d=0;
        while(i<len)
        {
            if((s[i]>=97&&s[i]<=122)||(s[i]>=48&&s[i]<=57))
            {
                ++c;++i;
            }
            else
            ++i;
        }

        if(c==len-3&&s[0]=='<'&&s[1]=='/'&&s[len-1]=='>'&&len>3)cout<<"Success\n";
        else cout<<"Error\n";
    }
}