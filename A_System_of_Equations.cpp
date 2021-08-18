#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,m,c=0;
    cin>>n>>m;
    int b=0;

    while(b<=n)
    {
        float x = sqrt(n-b);
        //cout<<m - b*b<<" "<<x<<endl;
        if(m - b*b == x)
        ++c;

        ++b;
    }

    cout<<c;
}
int main()
{
    solve();
}