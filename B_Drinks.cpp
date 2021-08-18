#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double sum=0;
    cin>>n;
    vector<int>p(n);
    for(int i=0;i<n;++i)
    {
        cin>>p[i];
        sum+=p[i];
    }
    cout<<setprecision(14)<<static_cast<double>(sum/n)<<endl;
    return 0;
}