#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5],i,j,k,l;
    for(i=0;i<5;++i)
    {
        for(j=0;j<5;++j)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                k=i;
                l=j;
            }
        }
    }
    if(k<2)
    k = 2-k;
    else
    k -= 2;

    if(l<2)
    l = 2-l;
    else
    l -= 2;

    cout<<l+k;

}