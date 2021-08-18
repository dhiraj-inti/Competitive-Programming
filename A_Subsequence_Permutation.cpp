#include<bits/stdc++.h>
#define ll long long
#define fast_in() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    string x;
    cin>>s;
    x=s;
    sort(x.begin(),x.end());
    int i,k=0;
    for(i=0;i<n;++i)
    {
        if(s[i]!=x[i])++k;
    }
    cout<<k<<'\n';
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