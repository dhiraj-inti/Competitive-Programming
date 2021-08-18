#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int t;
    cin>>t;
    while(t--)
    {
        
        long long int n,m,i,j=0,c=0;
        cin>>n>>m;
        long long int a[n],b[m],t[n];
        for(i=0;i<n;++i)
        {
            cin>>a[i];
            t[i]=-1;
        }
        for(i=0;i<m;++i)cin>>b[i];

        for(i=0;i<n;++i)
        {
            
            if(a[i]==1)
            {
                t[i]=0;
                j=i;
                ++c;
            }
            else if(a[i]==0&&c>=1)
            {
                t[i]=i-j;
            }
        }

        c=0;
        for(i=n-1;i>=0;--i)
        {
            if(a[i]==2)
            {
                t[i]=0;
                j=i;
                ++c;
            }
            else if(a[i]==0&&c>=1)
            {
                if(t[i]>j-i||t[i]==-1)
                {
                    t[i] = j-i;
                }
            }
        }
        
        for(i=0;i<m;++i)
        {
            if(b[i]-1==0)
            cout<<"0 ";
            else
            cout<<t[b[i]-1]<<" ";
        }
        
        cout<<"\n";
        
    }

    return 0;
}
