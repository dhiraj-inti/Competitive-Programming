#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        cin >> arr[i];
        sort(arr, arr + n);
        int ans = 0;
        int ans1 = 0;
        for (int i = 2; i < n; i++)
        {
            ans1 += arr[i-2];
            ans -= ((i - 1) * arr[i]);
            ans += ans1;
        }
        cout << ans << endl;
    }
        
    
}