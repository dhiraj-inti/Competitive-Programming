#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d,x,y,z;cin>>d>>x>>y>>z;
        int ans1=0,ans2=0;
        ans1 = x*7;
        ans2 = y*d + z*(7-d);
        cout<<max(ans1,ans2)<<endl;
        //cout<<(ans1>ans2?ans1:ans2)<<"\n";
    }
}