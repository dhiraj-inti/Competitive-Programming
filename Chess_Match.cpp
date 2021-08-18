#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;cin>>n>>a>>b;
        long int x = 2*(180+n) - (a+b);
        cout<<x<<endl;
    }
}