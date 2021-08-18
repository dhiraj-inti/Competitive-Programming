#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int j=1;
    while(j<=t)
    {
        int g[3][3],c=0,i=0,k=0,maX=0;
        vector<int> sums(4);
        cin>>g[0][0]>>g[0][1]>>g[0][2]>>g[1][0]>>g[1][2]>>g[2][0]>>g[2][1]>>g[2][2];
        if(2*g[0][1]==g[0][0]+g[0][2])++c;
        if(2*g[2][1]==g[2][0]+g[2][2])++c;
        if(2*g[1][0]==g[0][0]+g[2][0])++c;
        if(2*g[1][2]==g[0][2]+g[2][2])++c;

        sums[0] = g[0][0]+g[2][2];
        sums[1] = g[0][1]+g[2][1];
        sums[2] = g[0][2]+g[2][0];
        sums[3] = g[1][0]+g[1][2];
        sort(sums.begin(),sums.end());
        for (i = 1; i < 4; i++)
	    {
            if(sums[i-1]==sums[i])++k;
	    }

        cout<<"Case #"<<j<<": "<<c+k+1<<endl;
        ++j;
    }
}