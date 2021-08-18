#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,min=0,max=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;++i)
    {
        cin>>a[i];
        if(a[i]>a[max])
        max=i;
        if(a[i]<=a[min])
        min=i;
        
    }
    if(min<max)
    cout<<(max + n - 2 - min)<<endl;
    else
    cout<<(max + n - 1 - min)<<endl;
    
}