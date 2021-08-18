#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    string s;
    cin>>s;
    int i,f[26]={0},ans=0, n= s.size(),x=0;
    for(i=0;i<s.size();++i)
    {
        f[s[i]-'a']++;
    }

    for(i=0;i<26;++i)
    {
        if(f[i]>1)
        ++ans;
        if(f[i]==1)
        ++x;
    }

    cout<<(ans+x/2)<<endl;
    

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}