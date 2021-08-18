#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c=0;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        for(int i=1;i<n;++i)
        {
            if(s[i]!=s[i-1])++c;
        }
        if(b<0)
        {
            
            cout << (a * n) + b + (b * (ceil(c / 2))) << endl;
           
        }
        else
        {
            cout<<n*(a + b)<<endl;
        }

    }
}