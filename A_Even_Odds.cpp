#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long int n,k,ans;
    cin>>n>>k;
    if(k<=((n+1)/2))
    {
        ans = 1 + 2*(k-1);
    }
    else
    {
        ans = 2*(k - (n+1)/2);
    }

    cout<<ans;
}
int main()
{
    solve();
}