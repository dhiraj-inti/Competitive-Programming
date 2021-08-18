#include<bits/stdc++.h>
using namespace std;
void solve(){
    long int n,m;
    cin>>n>>m;
    long long int a[m],i,sum=0;
    for(i=0;i<m;++i)
    cin>>a[i];

    sum += a[0]-1;
    
    for(i=1;i<m;++i)
    {
        if(a[i]<a[i-1])
        {
            sum+= n - a[i-1] + a[i];
        }
        else
        {
            sum += a[i] - a[i-1];
        }
    }

    cout<<sum;
}
int main()
{
    solve();
}