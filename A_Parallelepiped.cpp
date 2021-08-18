#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x,y,z,l,b,h;
    cin>>x>>y>>z;
    l = sqrt(x*z/y);
    b = sqrt(x*y/z);
    h = sqrt(y*z/x);
    int ans;
    ans = 4*(l+b+h);
    cout<<ans;
}
int main()
{
    solve();
}