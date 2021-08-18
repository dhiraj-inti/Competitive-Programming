#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,h;cin>>l>>h;
        string s;cin>>s;int czero=0,x;
        int test=0;
        for(int i=0;i<s.size();++i)
        {

            if(s[i]=='0')++czero;
            else
            {
                x = 2*(h-czero);
                if(czero==h)test=1;
                if(x<h)
                {
                    h=x;
                }
                czero =0;
            }
        }
        if(czero>=h||czero==x||test==1)cout<<"YES\n";
        else cout<<"NO\n";
    }
}