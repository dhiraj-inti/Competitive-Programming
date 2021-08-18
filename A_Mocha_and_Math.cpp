#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast_in() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<ll> v(n);
    int i;
    for(i=0;i<n;++i)cin>>v[i];

    int x=v[0];
    for(i=1;i<n;++i)x&=v[i];

    cout<<x<<endl;
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