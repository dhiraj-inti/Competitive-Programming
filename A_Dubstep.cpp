#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    string s,ans="";
    cin>>s;
    while(s.find("WUB")!= string::npos)
    {
        int i = s.find("WUB");

        if(i==0)
        s.erase(i,3);
        else
        {
            
            ans += s.substr(0,i);
            ans += " ";
            s.erase(0,i);
        }
        
    }
    if(s.size()!=0)
    ans+=s;
    
    cout<<ans;
}
int main()
{
    solve();
}