#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast_in() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
using namespace std;
void solve(){
    string s;
    cin>>s;
    string f="hello";
    int i=0,j=0;
    bool flag = false;
    while(i<s.size())
    {
        if(f[j]==s[i])
        {
            ++j;
            if(j==5)
            flag = true;
        }

        ++i;
    }
    if(flag)cout<<"YES";
    else cout<<"NO";
}
int main()
{
    fast_in();
    solve();
}