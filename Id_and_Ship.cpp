#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast_in() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
using namespace std;
void solve(){
    char c;
    cin>>c;
    if(c=='b'||c=='B')cout<<"BattleShip\n";
    else if(c=='c'||c=='C')cout<<"Cruiser\n";
    else if(c=='d'||c=='D')cout<<"Destroyer\n";
    else if(c=='f'||c=='F')cout<<"Frigate\n";
}
int main()
{
    fast_in();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}