#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,a=0,b=0,c=0,d=0,min1,min2;
    cin>>n;
    int p[n][2];
    for(i=0;i<n;++i)
    {
        for(j=0;j<2;++j)
        {
            cin>>p[i][j];
        }
    }
    for(i=0;i<n;++i)
    {
        if(p[i][0]==0)++a;
        if(p[i][0]==1)++b;
        if(p[i][1]==0)++c;
        if(p[i][1]==1)++d;
    }
    min1= a>b?b:a;
    min2= c>d?d:c;
    cout<<min1+min2;
}