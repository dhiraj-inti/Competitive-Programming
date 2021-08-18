#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast_in() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
using namespace std;
void solve(){
    ll n;
    cin>>n;
    ll t=0;
    if(n%6==0)
    {
        t+= 15*(n/6);
    }
    else if(n%8==0)
    {
        t+= 20*(n/8);
    }
    else if(n%10==0)
    {
        t+= 25*(n/10);
    }
    else if(n%14==0)
    {
        t+= 35*(n/14);
    }
    else if(n%18==0)
    {
        t+= 45*(n/18);
    }
    else if(n%16==0)
    {
        t+= 40*(n/16);
    }
    else if(n%24==0)
    {
        t+= 60*(n/24);
    }
    else
    {
        t += 25*(n/10);
        int r = n%10;
        if(r>8)t+=25;
        else if(r>6)t+=20;
        else t+=15;
    }
    cout<<t<<endl;
}
int main()
{
    fast_in();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
