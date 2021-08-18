#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,i,min=0,x=1;
    cin>>n;
    int a[n];
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    min = abs(a[1] - a[0]);
    
    for(i=2;i<n;++i)
    {
        if(abs(a[i-1]-a[i])<min)
        {
            min = abs(a[i-1]-a[i]);
            x = i;
        }
    }
    if(abs(a[n-1]-a[0])<min)
    cout<<n<<" 1";
    else
    cout<<x<<" "<<x+1;
}
int main()
{
    solve();
}