#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=count(a.begin(),a.end(),*min_element(a.begin(),a.end()));
    if(ans==1)
        cout<<distance(a.begin(),min_element(a.begin(),a.end()))+1;
    else 
        cout<<"Still Rozdil";
}
