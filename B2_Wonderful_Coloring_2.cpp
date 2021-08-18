#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n,k,i;
    cin>>n>>k;
    ll a[n],f[200001]={-1};
    int ans[n];
    for(i=0;i<n;++i)
    {
        cin>>a[i];
        if(f[a[i]]!=-1)
        f[a[i]]++;
        else
        f[a[i]]+=2;
    }

    for(i=0;i<n;++i)
    {
        if(f[a[i]]==-1)
        continue;
        if(f[a[i]]<=k)
        {
            ans[i]=f[a[i]]--;
        }
        else
        {
            ans[i]=0;
            f[a[i]]--;
        }
    }

    for(i=0;i<n;++i)cout<<ans[i]<<" ";
    cout<<endl;
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