#include<bits/stdc++.h>
#define ll long long
using namespace std;
int maxFreq(int *arr, int n);
void solve(){
    int n;
    cin>>n;
    vector<int> a(n),b(n),c(n),d(n),e(n);
    int i;
    for(i=0;i<n;++i)
    cin>>a[i]>>b[i]>>c[i]>>d[i]>>e[i];

    int p,q,r,s,t,ans[5],f=-1;
    ans[0]= p = distance(a.begin(),min_element(a.begin(),a.end()));
    ans[1]= q = distance(b.begin(),min_element(b.begin(),b.end()));
    ans[2]= r = distance(c.begin(),min_element(c.begin(),c.end()));
    ans[3]= s = distance(d.begin(),min_element(d.begin(),d.end()));
    ans[4]= t = distance(e.begin(),min_element(e.begin(),e.end()));
    
    f = maxFreq(ans,5);

    cout<<f+1<<endl;
}
int maxFreq(int *arr, int n) {
    //using moore's voting algorithm
    int res = 0;
    int count = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[res]) {
            count++;
        } else {
            count--;
        }
         
        if(count == 0) {
            res = i;
            count = 1;
        }
         
    }
     
    return arr[res];
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