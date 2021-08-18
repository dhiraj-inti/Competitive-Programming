#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    cin>>x;
    int l=0,r;
    while(x!=0)
    {
        r = x%10;
        x/=10;
        if(r==4||r==7)++l;
    }
    if(l==4||l==7)cout<<"YES";
    else cout<<"NO";

    return 0;
}