#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    n++;
    while(1)
    {
        int i,max=0;
        for(i=n-1;i>1;--i)
        {
            if(n%i==0)
            {
                max=i;
                break;
            }
            
        }
        if(max)
        ++n;
        else
        break;
    }

    if(n==m)cout<<"YES";
    else cout<<"NO";
}