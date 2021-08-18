#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    int l=0,r=0,u=0,d=0,ans=0;
    
    cin>>n;
    int x[n][2];
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>x[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        l=r=u=d=0;
 
        for(j=0;j<n;j++)
        {
            if(x[i][0]>x[j][0] && x[i][1]==x[j][1])
            {
                l++;
            }
            else if(x[i][0]<x[j][0] && x[i][1]==x[j][1])
            {
                r++;
            }
            else if(x[i][0]==x[j][0] && x[i][1]>x[j][1])
            {
                u++;
            }
            else if(x[i][0]==x[j][0] && x[j][1]>x[i][1])
            {
                d++;
            }
        }
        if(l>=1 && r>=1 && u>=1 && d>=1 )
        {
            ++ans;
        }
    }
    cout<<ans;
}