#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,q;
    cin>>n>>q;
    long long int a[n];
    long long int i;
    for(i=0;i<n;++i)cin>>a[i];
    vector<long long int> b(a,a+n);
    sort(b.begin(),b.end());
    while(q--)
    {
        long long int x;
        cin>>x;
        long int q = lower_bound(b.begin(),b.end(), x) - b.begin();
        if(b[q]==x)cout<<"0\n";
        else if(q%2==1)cout<<"NEGATIVE\n";
        else cout<<"POSITIVE\n";
    }
}