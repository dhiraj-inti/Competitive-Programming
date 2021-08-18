#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast_in() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
using namespace std;
void solve(){
    int l,c1=0,c2=0;cin>>l;
    string s;cin>>s;
    bool t=false,h=false;
    if(s.find('H')==string::npos&&s.find('T')==string::npos)
    {
        cout<<"Valid\n";
        exit(0);
    }

    if(count(s.begin(),s.end(),'H')==count(s.begin(),s.end(),'T'))
    {
        for(int i=0;i<l;++i)
        {
            if(s[i]=='H')
            {
                h = true;
                t = false;
                ++c1;
            }
            if(s[i]=='T'&&h==true)
            {
                h = false;
                t = true;
            }
            else
            {
                cout<<"Invalid\n";
            }
        }
    }
    else
    {
        cout<<"Inalid\n";
    }
}
int main()
{
    fast_in();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}