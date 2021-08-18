#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;cin>>s;
        string::iterator it=s.begin();
        ++it;
        if(s[0]!='1')
        s.insert(s.begin(),'1');
        else
        s.insert(it,'0');

        cout<<s<<endl;
    }
}