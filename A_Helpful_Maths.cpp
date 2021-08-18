#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0,count1= count(s.begin(),s.end(),'1'),count2= count(s.begin(),s.end(),'2'),count3= count(s.begin(),s.end(),'3');
    while(s[i]!='\0'&&i<s.size())
    {
        if(count1!=0)
        {
            s[i]='1';;
            --count1;
        }
        else if(count2!=0)
        {
            s[i]='2';
            --count2;
        }
        else s[i]='3';

        i+=2;
    }

    cout<<s;
}