/******************CODE*********************/
// Author: Shubail Haque Turzo (ICE-13/PUST)
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// Library
#include <bits/stdc++.h>
using namespace std;

// Type Definition
typedef long long ll;
typedef vector<string> vstr;
typedef vector<ll> vll;

// STL Operation
#define pb push_back
#define asc(v) sort(v.begin(), v.end())
#define dsc(v) sort(v.begin(), v.end(), greater<int>())
#define rev(s) reverse(v.begin(), v.end())
#define Fast_ios ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

// Loop
#define icr(i, n) for (ll i = 0; i < n; i++)
#define dcr(i, n) for (ll i = n - 1; i >= 0; i--)

// Printing Shortcut
#define dp(x) cout << x << endl;
#define dp2() cout << x << " " << y << endl;

// Pre-Calculation
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)

// Solution
void solve()
{
    int a, b;
    cin >> a >> b;
    vll v1(a), v2(b);
    for (auto &u : v1)
        cin >> u;
    for (auto &u1 : v2)
        cin >> u1;
    bool found = false;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (v1[j] == v2[i])
            {
                found = true;
                break;
            }
        }
    }
    if (!found)
    {
        dp("NO");
    }
    else
    {
        dp("YES");
    }
}

int main()
{
    Fast_ios;
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}