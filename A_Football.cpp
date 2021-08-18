#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;
    cin>>n;
    string a,b;
    int i,ca=0,cb=0,c=0;
    for(i=0;i<n;++i)
    {
        string s;
        cin>>s;
        if(i==0)
        {
            a=s;
            ++ca;
        }
        else if(s!=a&&c<1)
        {
            b = s;
            ++c;
            ++cb;
        }
        else if(s==a)
        {
            ++ca;
        }
        else
        {
            ++cb;
        }
    }

    if(ca>cb)cout<<a;
    else cout<<b;
}
int main()
{
    solve();
}