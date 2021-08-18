#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,ans=0;
    cin>>n;
    int i;
    for ( i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        sum +=x;
    }
    for(i=1;i<=5;++i)
    {
        if((sum+i)%(n+1)!=1)
        ++ans;
    }
    cout<<ans;
}