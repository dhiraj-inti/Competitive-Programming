#include<bits/stdc++.h>
using namespace std;
int main()
{
    
        int n,i,sumx=0,sumy=0,sumz=0;
        cin>>n;
        int x[n],y[n],z[n];
        for(i=0;i<n;++i)
        {
            cin>>x[i]>>y[i]>>z[i];
            sumx+=x[i];
            sumy+=y[i];
            sumz+=z[i];
        }
        if(sumx==0&&sumy==0&&sumz==0)cout<<"YES\n";
        else cout<<"NO\n";
    
    return 0;
}