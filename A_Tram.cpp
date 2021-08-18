#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n],b[n];int max=0,net=0;
    for(int i=0;i<n;++i)
    {
        cin>>a[i]>>b[i];
        net += b[i] - a[i];
        if(net>max)max=net;
    }
    cout<<max<<endl;
}