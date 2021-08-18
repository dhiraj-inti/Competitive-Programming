#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c="";
    cin>>a;
    cin.ignore();
    cin>>b;
    int i=0;
    while(a[i]!='\0'&&b[i]!='\0')
    {
        if((a[i]=='0'&&b[i]=='0')||(a[i]=='1'&&b[i]=='1'))
        c+= "0";
        else
        c+= "1";
        i++;
    }
    
    cout<<c;
}