#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,e,f;
        cin>>a>>d>>b>>e>>c>>f;
        if(d>=a&&e>=b&&f<=c)cout<<"YES\n";
        else cout<<"NO\n";
    }
}