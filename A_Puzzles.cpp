#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast_in() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> v(m);
    int i;
    for(i=0;i<m;++i)cin>>v[i];

    sort(v.begin(),v.end());

    if(n==m)
    {
        cout<<v[n-1]-v[0]<<endl;
    }
    else
    {
        int min = INT16_MAX,j;

        for(i=0,j=n-1;j<m;++i,++j)
        {
            if(v[j]-v[i]<min)
            min=v[j]-v[i];
        }

        cout<<min<<endl;
    }
}
int main()
{
    fast_in();
    solve();
}