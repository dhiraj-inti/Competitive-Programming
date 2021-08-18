#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast_in() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<string> s(n);
    int i,j=0;
    for(i=0;i<n;++i)cin>>s[i];

    for(i=0;i<n;++i)
    {
        for(j=0;j<m;j++)
        {
            if(s[i][j]=='.')
            {
                if((i+j)%2==0)s[i][j]='B';
                else s[i][j]='W';
            }
        }
    }

    for(i=0;i<n;++i)cout<<s[i]<<endl;
}
int main()
{
    fast_in();
    solve();
}