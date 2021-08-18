#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n;
    cin>>n;
    long int c1,c2;
    if(n%3==0)
    {
        c1 = c2 = n/3;
    }
    else if(n%3==1)
    {
        c1 = (n+2)/3;
        c2 = c1 - 1;
    }
    else
    {
        c1 = (n-2)/3;
        c2 = c1 + 1;
    }
    cout<<c1<<" "<<c2<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}