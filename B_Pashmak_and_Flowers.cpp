#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast_in() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
using namespace std;
void solve(){
    ll n;
    cin>>n;
    vector<ll> b(n);
    ll i;
    for(i=0;i<n;++i)cin>>b[i];
    ll ans = *max_element(b.begin(),b.end()) - *min_element(b.begin(),b.end());
    ll c = count(b.begin(),b.end(),*min_element(b.begin(),b.end()));
    ll c1 = count(b.begin(),b.end(),*max_element(b.begin(),b.end()));

    ll k = (n*(n-1))/2;

    if(*max_element(b.begin(),b.end())!=*min_element(b.begin(),b.end()))
    cout<<ans<<" "<<c*c1;
    else
    cout<<ans<<" "<<k;
}
int main()
{
    fast_in();
    solve();
}