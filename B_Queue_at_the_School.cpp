#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i;
    string s;
    char temp;
    cin>>n>>t;
    cin>>s;
    for(i=1;i<=t;++i)
    {
        int j=0;
        while(s[j+1]!='\0')
        {
            if(s[j]<s[j+1])
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
                j+=2;
            }
            else ++j;
            
        }
    }
    cout<<s<<endl;

    return 0;
}