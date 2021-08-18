#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,co=0;
    cin>>t;
    while(t--)
    {
        int a,b,c;cin>>a>>b>>c;
        if(a+b+c>=2)++co;
    }
    cout<<co;
}