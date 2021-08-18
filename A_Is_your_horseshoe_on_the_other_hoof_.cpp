#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <long long int> colors(4);
    cin>>colors[0]>>colors[1]>>colors[2]>>colors[3];
    sort(colors.begin(),colors.end());
    colors.erase(unique(colors.begin(),colors.end()),colors.end());
    cout<<(4 - colors.size())<<"\n";
}