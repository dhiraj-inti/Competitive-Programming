#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    string s,ans="";
    int k;
    cin>>k;
    cin>>s;
    int a[26]={0};
    int i;
    bool flag =  true;
    for(i=0;i<s.size();++i)
    {
        a[s[i]-97]++;
    }

    for(i=0;i<26;++i)
    {
        if(a[i]!=0 && a[i]%k!=0)
        flag = false;
        else if(a[i]!=0&& a[i]%k==0)
        {
            int x = a[i]/k;
            while(x>0)
            {
                ans += 'a' + i;
                --x;
            }
        }
    }

    if(!flag)cout<<-1;
    else {
        while(k>0)
        {
            cout<<ans;
            --k;
        }
    }
}
int main()
{
    solve();
}