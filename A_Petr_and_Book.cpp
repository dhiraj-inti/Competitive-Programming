#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,i,sum=0,r;
    cin>>n;
    int a[n];
    for(i=0;i<7;++i)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum>=n)
    {
        for(i=0;i<7;++i)
        {
            n-=a[i];
            if(n<=0)
            {
                cout<<i+1;
                break;
            }
        }
    }
    else 
    {
        r = n%sum;
        if(sum==n||r==0)
        {
            for(i=6;i>=0;--i)
            {
                if(a[i]>0)
                break;
            }
            cout<<i+1;
        }
        else
        {
            for(i=0;i<7;++i)
            {
                r-=a[i];
                if(r<=0)
                {
                    cout<<i+1;
                    break;
                }
            }
        }
    }
    
    
}
int main()
{
    solve();
}