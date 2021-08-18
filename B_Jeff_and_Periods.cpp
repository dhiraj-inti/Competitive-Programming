#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast_in() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
using namespace std;
void solve(){
    ll i,n,k,c1=0;
    cin>>n;
    vector<ll> a(n);
    for(i=0;i<n;++i)cin>>a[i];
    vector<ll> b(a.begin(),a.end());
    vector<ll> v;
    multimap<ll,ll> mp;
    reverse(b.begin(),b.end());
    
    for(i=0;i<n;++i)
    {
        if(find(v.begin(),v.end(),a[i])==v.end())
        {
            ++c1;
            ll c = count(a.begin(),a.end(),a[i]);
            auto it = find(b.begin(),b.end(),a[i]);
            k = distance(b.begin(),it);
            ll ans = (n+i-k+1)/c;
            v.push_back(a[i]);
            if(c!=1)
            mp.insert(pair<ll,ll>(a[i],ans));
            else
            mp.insert(pair<ll,ll>(a[i],0));
        }
    }
    cout<<c1<<endl;
    auto it = mp.begin();
    while(it!=mp.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        ++it;
    }
}
int main()
{
    fast_in();
    solve();
}