#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast_in() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
using namespace std;
void solve(){
    string s,ans=".";
    cin>>s;
    int i=0;
    while(s[i])
    {
        if(s[i]!='a'&&s[i]!='A'&&s[i]!='E'&&s[i]!='e'&&s[i]!='I'&&s[i]!='i'&&s[i]!='O'&&s[i]!='o'&&s[i]!='U'&&s[i]!='u'&&s[i]!='Y'&&s[i]!='y')
        {
            if(s[i]<97)s[i]+=32;
            ans+= s[i];
            ans += '.';
        }
        ++i;
    }
    ans.erase(ans.size()-1);
    cout<<ans;
}
int main()
{
    fast_in();
    solve();
}