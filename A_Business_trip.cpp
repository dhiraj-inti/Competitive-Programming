#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int k,ans=0,sum=0;
    cin>>k;
    vector <int> v(12);
    for(int i=0;i<12;++i)cin>>v[i];

    sort(v.begin(),v.end());
    
    auto it = v.end()-1;
    while(sum<k)
    {
        sum += *it;
        --it;
        ++ans;
    }
    if(ans<=12)
    cout<<ans;
    else
    cout<<"-1";
}
int main()
{
    solve();
}