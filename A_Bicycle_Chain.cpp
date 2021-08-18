#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,m;
    int i,co=0,max=0;
    cin>>n;
    float a[n];
    for(i=0;i<n;++i)cin>>a[i];
    cin>>m;

    float b[m];
    for(i=0;i<m;++i)cin>>b[i];

    int j;

    vector<int> c;
    for(int i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            float x=b[j]/a[i];
            
            if(floor(x)==ceil(x))
            {
                c.push_back(floor(x));
            }
        }
    }

    co = count(c.begin(),c.end(),*max_element(c.begin(),c.end()));
    cout<<co;
}
int main()
{
    solve();
}