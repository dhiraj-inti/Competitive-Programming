#include<bits/stdc++.h>
using namespace std;
void solve(){
    int i,n,z=0,f=0;
    cin>>n;
    for(i=0;i<n;++i)
    {
        int x;
        cin>>x;
        if(x==5)++f;
        else ++z;
    }
    if(z==0)
    {
        cout<<"-1";
        exit(0);
    }
    else if(f<9)
    {
        cout<<"0";
        exit(0);
    }

    int y = f/9;
    for(i=0;i<y*9;++i)cout<<"5";
    for(i=z;i>0;--i)cout<<"0";
}
int main()
{
    solve();

    return 0;
}