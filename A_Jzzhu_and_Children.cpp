#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans=0;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        v[i]=ceil(static_cast<float>(v[i])/static_cast<float>(m));
        if(v[i]>=v[ans])
        ans=i;
    }
    cout<<ans+1<<endl;
}