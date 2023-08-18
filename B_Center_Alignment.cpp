/******************CODE*********************/
#include <bits/stdc++.h>
using namespace std;
typedef vector<string> vstr;
typedef vector<long long> vll;
#define pb push_back
#define ll long long
#define REP(i,n) for (int i=0,_n=(n); i < _n; i++)
#define REPD(i,n) for (int i=(n)-1; i >= 0; i--)
#define all(v) v.begin(), v.end()
#define acs(v, x) accumulate(all(v), x);
#define acm(v, x) accumulate(all(v), 1, multiplies<ll>());
#define ers(num) num.erase(num.begin()) // removing the array's first element
#define asc(v) sort(all(v))
#define dsc(v) sort(v.begin(), v.end(), greater<int>())
#define rev(v) reverse(all(v))
#define unique_resize(v) v.resize(distance(v.begin(), unique(all(v))));
#define Fast_ios ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

// Printing Shortcut
#define dp(x) cout << x << endl
#define dp2(x, y) cout << x << " " << y << endl

// Functions
ll gcd(ll a, ll b) { return a ? gcd(b % a, a) : b; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
// Solution
void solve()
{
    string s;
    vstr vs;
    ll mx = 0;
    while (getline(cin, s))
    {
        vs.pb(s);
        ll x = s.size();
        mx = max(mx, x);
    }
    ll r = vs.size(), c = mx + 2;
    REP(i, c)cout << "*";
    cout << endl;
    ll side = 0;
    REP(i, r)
    {
        ll len = vs[i].size();
        ll space = (mx - len)/2;
        if (space & 1)
        {
            space +=side;
            side=1-side;
        }
        cout << "*";
        ll j = 0;
        for (; j < space; j++)
            cout << " ";
                cout << vs[i];
        for (ll j = j + len; j < mx; j++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }
    REP(i, c)
        cout << "*";
    cout << endl;
}
signed main()
{
    Fast_ios;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}