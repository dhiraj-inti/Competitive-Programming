#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;cin>>str;
    sort(str.begin(),str.end());
    str.erase(unique(str.begin(),str.end()),str.end());
    if(str.size()%2==1)
    cout<<"IGNORE HIM!\n";
    else
    cout<<"CHAT WITH HER!\n";
}