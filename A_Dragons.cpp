#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast_in() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
using namespace std;
void solve(){
    int n,s;
    cin>>s>>n;
    multimap<int,int> mp;
    int i;
    for(i=0;i<n;++i)
    {
        int a,b;
        cin>>a>>b;
        mp.insert(pair<int,int>(a,b));
    }

    auto it = mp.begin();
    while(it!=mp.end())
    {
        
        if(s>it->first)
        s+= it->second;
        else
        {
            cout<<"NO";
            exit(0);
        }
        ++it;
    }
    cout<<"YES";
}
int main()
{
    fast_in();
    solve();
}