#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,i,sum=0,k=0;
        cin>>n;
        long int a[n];
        for(i=0;i<n;++i)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%n!=0)
        k=-1;
        else
        {
            for(i=0;i<n;++i)
            {
                if(a[i]>sum/n)
                ++k;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}