#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d,s=0;
    cin>>k>>l>>m>>n>>d;
    int x=d;
    for(int i=1;i<=d;++i)
    {
        if (i % k != 0 && i % l != 0 && i % m != 0 && i % n != 0)
	    --x;
    }
    cout<<x;
    return 0;
}