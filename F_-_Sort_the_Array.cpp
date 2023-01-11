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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min_val = a[0];
    int max_val = a[0];
    int min_index = 0;
    int max_index = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min_val)
        {
            min_val = a[i];
            min_index = i;
        }
        if (a[i] > max_val)
        {
            max_val = a[i];
            max_index = i;
        }
    }
    if (max_val < min_val)
    {
        cout << "yes" << endl;
        cout << min_index + 1 << " " << max_index + 1 << endl;
    }
    else
        cout << "no" << endl;
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