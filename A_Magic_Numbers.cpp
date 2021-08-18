#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    string s;
    cin>>s;
    int i=0;
    bool flag = true;
    int n= s.size();
    
    while(s[i]!='\0')
    {
        if(s[i]=='1'||s[i]=='4')
        {
            if(i==0&&s[i]!='1')
            {
                flag = false;
                goto result;
            }
            else if(s[i]=='4')
            {
                if(s[i+1]=='4'&&s[i+2]=='4')
                {
                    flag = false;
                    goto result;
                }
                else if(s[i+1]=='4')
                {
                    i+=2;
                }
                else
                {
                    i+=1;
                }
            }
            else
            {
                i+=1;
            }
        }
        else
        {
            flag = false;
            goto result;
        }
    }

    result:if(flag)cout<<"YES";
           else cout<<"NO";
    
}
int main()
{
    solve();
}