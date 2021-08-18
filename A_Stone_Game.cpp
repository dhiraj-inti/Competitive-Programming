#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,x,ma,mi;
        cin>>n;
        int a[n];
        for(i=0;i<n;++i)
        {
            cin>>a[i];
            if(a[i]==1)
            mi = i;
            if(a[i]==n)
            ma = i;
        }
        if(n%2==0)
        {
            if(ma<n/2&&mi<n/2)
            x = (ma>mi)?ma+1:mi+1;
            if(ma>=n/2&&mi>=n/2)
            x = (n-1-ma>n-1-mi)?n-ma:n-mi;
            if(ma>=n/2&&mi<n/2)
            x = ((n-ma) + mi + 1 < n-mi)?(n-ma) + mi + 1:n-mi;
            if(mi>=n/2&&ma<n/2)
            x = ((n-mi) + ma + 1 < n-ma)?(n-mi) + ma + 1:n-ma;
        }
        else
        {
            if(ma<=n/2&&mi<=n/2)
            x = (ma>mi)?ma+1:mi+1;
            if(ma>=n/2&&mi>=n/2)
            x = (n-1-ma>n-1-mi)?n-ma:n-mi;
            if(ma>=n/2&&mi<=n/2)
            x = ((n-ma) + mi + 1 < ((n-ma>mi)?n-ma+1:mi+1))?(n-ma) + mi + 1:((n-ma>mi)?n-ma:mi+1);
            if(mi>=n/2&&ma<=n/2)
            x = ((n-mi) + ma + 1 < ((n-mi>ma)?n-mi+1:ma+1))?(n-mi) + ma + 1:((n-mi>ma)?n-mi:ma+1);
        }
        cout<<x<<endl;
    }
    return 0;
}