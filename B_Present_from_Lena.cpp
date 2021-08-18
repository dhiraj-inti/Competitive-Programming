#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast_in() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
using namespace std;
void solve(){
    int n;
    cin>>n;
    int i,j;
    for(i=0;i<2*n+1;++i)
    {
        if(i==0||i==2*n)
        {
            for(j=0;j<2*n;++j)cout<<" ";
            cout<<0;
        }
        else if(i>0&&i<n+1)
        {
            for(j=0;j<2*(n-i);++j)cout<<" ";
            for(j=0;j<=i;++j)cout<<j<<" ";
            cout<<i-1;
            for(j=i-2;j>=0;--j)cout<<" "<<j;
        }
        else
        {
            for(j=0;j<2*(i-n);++j)cout<<" ";
            for(j=0;j<=2*n-i;++j)cout<<j<<" ";
            cout<<2*n-i-1;
            for(j=2*n-i-2;j>=0;--j)cout<<" "<<j;
        }
        cout<<endl;
    }

}
int main()
{
    fast_in();
    solve();
}