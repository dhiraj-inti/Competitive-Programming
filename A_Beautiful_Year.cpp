#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,c=0;;
    cin>>y;
    ++y;
    int r1=0,r2=0,r3=0,r4=1;
    while(1)
    {
        r1 = y%10;
        r2 = (y/10)%10;
        r3 = (y/100)%10;
        r4 = (y/1000)%10;
        if(r1!=r2&&r1!=r3&&r1!=r4&&r2!=r3&&r2!=r4&&r3!=r4)
        break;
        else++y;
    }
    cout<<y<<endl;
}