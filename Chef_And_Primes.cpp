#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast_in() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
using namespace std;
void solve(){
    ll ans1=2,ans2;
    ll x,i=2,y;
    cin>>x;
    y=x-1;
    ans2 = y/ans1;
    if(x==5)
    cout<<"2 4"<<endl;
    else
    cout<<ans1<<" "<<ans2<<endl;
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