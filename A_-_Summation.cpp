/******************CODE*********************/
// Author: Shubail Haque Turzo (ICE-13/PUST)
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// Library
#include <bits/stdc++.h>
using namespace std;
#define dp(x) cout << x << endl
// Type Definition
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    string s;
    while (n--)
    {
        int tmp;
        cin >> tmp;
        s += to_string(tmp % 10);
    }
 
  
        dp(s);
}
int main()
{

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}