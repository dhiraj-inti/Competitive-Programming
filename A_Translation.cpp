#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    string s,t;
    cin>>s;
    cin>>t;
    reverse(s.begin(),s.end());
    if(s==t)
    cout<<"YES";
    else
    cout<<"NO";
}
int main()
{
    solve();
}