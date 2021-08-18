#include<bits/stdc++.h>
using namespace std;
string fractionToDecimal(int numr, int denr)
{
    string res; // Initialize result
 
    // Create a map to store already
    // seen remainders remainder is used
    // as key and its position in
    // result is stored as value.
    // Note that we need
    // position for cases like 1/6.
    // In this case,the recurring sequence
    // doesn't start from first
    // remainder.
    map<long long int, long long int> mp;
    mp.clear();
 
    // Find first remainder
    long long int rem = numr % denr;
 
    // Keep finding remainder until either remainder
    // becomes 0 or repeats
    while ((rem != 0)
           && (mp.find(rem) == mp.end()))
    {
        // Store this remainder
        mp[rem] = res.length();
 
        // Multiply remainder with 10
        rem = rem * 10;
 
        // Append rem / denr to result
        long long int res_part = rem / denr;
        res += to_string(res_part);
 
        // Update remainder
        rem = rem % denr;
    }
 
    return (rem == 0) ? "" : res.substr(mp[rem]);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;cin>>a>>b;
        string res = fractionToDecimal(a, b);
        if (res == "")
        cout << "YES\n";
        else
        cout << "NO\n";
    }

    return 0;
}