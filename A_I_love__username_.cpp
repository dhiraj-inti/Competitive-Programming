#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;++i)cin>>a[i];
    int min=a[0],max=a[0],x=0;
    for(i=1;i<n;++i)
    {
        if(a[i]>max)
        {
            max=a[i];
            ++x;
        }
        if(a[i]<min)
        {
            min=a[i];
            ++x;
        }
    }
    cout<<x;
}