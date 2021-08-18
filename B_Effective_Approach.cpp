#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_map<int,int> counts;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        counts[x]=i+1;
    }
    int m;cin>>m;long long int cv=0,cp=0;
    for(int i=0;i<m;i++)
    {
        int b;
        cin>>b;
        cv += counts[b];
        cp += n-counts[b]+1;
    }
    cout<<cv<<" "<<cp;
}