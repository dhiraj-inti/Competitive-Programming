#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        unordered_map <string,int> x;
        for(int i=0;i<3*n;++i)
        {
            string s;int j;cin>>s>>j;
            if(x.find(s)!=x.end())
            {
                x[s]+=j;
            }
            else
            x.insert(pair<string,int>(s,j));

        }
        vector<int> y;
        y.clear();
        for(auto i:x)
        {
            y.push_back(i.second);
        }
        sort(y.begin(),y.end());
        vector<int>::iterator it;
        it = y.begin();
        while(it!=y.end())
        {
            cout<<*it<<" ";
            ++it;
        }

        cout<<endl;
    }
}