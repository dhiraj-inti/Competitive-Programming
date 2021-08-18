#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;vector<long long int> a;
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(auto it=a.begin();it!=a.end();++it)
        {
            if(log2(*it + 1)-floor(log2(*it + 1))==0)
            {
                auto p= find(a.begin(),a.end(),*it);
                a.push_back(*it);
                a.erase(p);
            }
        }
        for(auto it=a.begin();it!=a.end();++it)cout<<*it<<" ";

        cout<<endl;
    }
}