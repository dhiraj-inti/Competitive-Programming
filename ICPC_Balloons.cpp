#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;int a[n],i,k=0,ans;
        for(i=0;i<n;++i)
        {
            cin>>a[i];
        }
        for(i=0;i<n;++i)
        {
            if(a[i]==1||a[i]==2||a[i]==3||a[i]==4||a[i]==5||a[i]==6||a[i]==7)++k;
            if(k==7)
            {
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
}