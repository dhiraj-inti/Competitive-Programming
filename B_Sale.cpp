#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,m,sum=0;
    cin>>n>>m;
    int i,a[n];
    vector<int> v;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
        if(a[i]<0)
        {
            sum -= a[i];
            v.push_back(-a[i]);
        }
    }
    sort(v.begin(),v.end());
    if(v.size()<=m)
    {
        cout<<sum;
    }
    else
    {
        int j= v.size() - m , y=0;
        for(;j<v.size();++j)
        y+= v[j];

        cout<<y;
    }

    
}
int main()
{
    solve();
}