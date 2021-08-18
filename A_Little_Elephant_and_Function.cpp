#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast_in() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
using namespace std;
void solve(){
    int n;cin>>n;
    if(n>3)
    {
        cout<<n<<" ";
        for(int i=1;i<n-1;++i)cout<<i<<" ";
        cout<<n-1;
    }
    else if(n==3)
    {
        cout<<"3 1 2";
    }
    else if(n==1)
    {
        cout<<1;
    }
    else
    {
        cout<<"2 1";
    }
}
int main()
{
    fast_in();
    solve();
}