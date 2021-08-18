#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast_in() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;

    vector<int> a(m);
    vector<int> b(m);
    int i,j;
    for(i=0;i<m;++i)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int ansmi=0,ansma=0,dup=n;
    j=0;
    
    for(i=0;i<n;++i)
    {
        if(a[j]==0)
        {
            ++j;
        }
        ansmi+=a[j];
        --a[j];
    }

    j=m-1;
    for(i=0;i<n;++i)
    {

        ansma+= b[j];
        --b[j];
        sort(b.begin(),b.end());
    }

    cout<<ansma<<" "<<ansmi<<endl;
}
int main()
{
    fast_in();
    solve();
}