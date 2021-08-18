#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s,c=0,i=1,sum;
        cin>>s;
        sum=s;
        if(s==1)
        {
            cout<<"1\n";
        }
        else if(s%2==1)
        {
            if(s==3)
            {
                cout<<"2\n";
                continue;
            }
            if(s==5)
            {
                cout<<"3\n";
                continue;
            }
            while(sum>0)
            {
                sum-=i;
                ++c;
                if(sum==i+2)
                {
                    ++c;break;
                }
                if(sum>=8)i+=2;
                else i++;
            }
            cout<<c<<endl;
        }
        else
        {
            if(s==2)
            {
                cout<<"2\n";
                continue;
            }
            if(s==4)
            {
                cout<<"2\n";
                continue;
            }
            while(sum>0)
            {
                sum-=i;
                ++c;
                if(sum==i+2)
                {
                    ++c;break;
                }
                if(sum>=7)i+=2;
                else i++;
            }
            cout<<c<<endl;
        }

        
    }
}