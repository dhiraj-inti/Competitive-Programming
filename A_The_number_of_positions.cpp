#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    if(a<b||a>b)
    {
        if(a+b<n)
        cout<<b+1;
        else if(a+b==n)
        cout<<b;
        else
        cout<<n-a;
    }
    else
    {
        if(a+b<n)
        cout<<b+1;
        else 
        cout<<n-b;
    }
}
int main()
{
    solve();
}