#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=1;i<=n;i++){
        cin>>arr[i];
        }
        int ans = 0;
        for(int i=1;i<=n;i++){
        int j = arr[i] - (i%arr[i]);
        while(j<=i) j+=arr[i];
        for(j;j<=n;j+=arr[i]){
            if(((i+j)/arr[i]) == arr[j]){
                 ans++;
            }
        }
    }
    cout<<ans<<endl;
    } 
}