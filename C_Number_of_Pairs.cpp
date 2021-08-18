#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,l,r,x=0;
        cin>>n>>l>>r;
        long long int a[n];
        for(long long int i=0;i<n;++i)
        cin>>a[i];
        for(long long int i=0;i<n;++i)
        {
            for(long long int j=i+1;j<n;++j)
            {
                if(a[i]+a[j]<=r&&a[i]+a[j]>=l)
                ++x;
            }
        } 
        cout<<x<<endl;
    }
    return 0;
}