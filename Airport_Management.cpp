/******************CODE*********************/

// Library
#include <bits/stdc++.h>
using namespace std;

// Type Definition
typedef vector<string> vstr;
typedef vector<long long> vll;

// STL Operation
#define pb push_back
#define ll long long
#define acs(v, x) accumulate(v.begin(), v.end(), x);
#define acm(v,x) accumulate(v.begin(), v.end(), 1,multiplies<ll>());
#define ers(num) num.erase(num.begin()) // removing the array's first element
#define asc(v) sort(v.begin(), v.end())
#define dsc(v) sort(v.begin(), v.end(), greater<int>())
#define rev(v) reverse(v.begin(), v.end())
#define unique_resize(v) v.resize(distance(v.begin(), unique(v.begin(), v.end())));
#define Fast_ios ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

// Printing Shortcut
#define dp(x) cout << x << endl
#define dp2(x,y) cout << x << " " << y << endl

//Functions
void vecin(vll &v){for(auto &u:v)cin>>u;}
void vecout(vll &v){for(auto &u:v)cout<<u<<" ";cout<<endl;}
ll gcd(ll a, ll b){return a?gcd(b%a,a):b;}
ll lcm(ll a, ll b){return a/gcd(a,b)*b;}

// Solution
void solve()
{
    ll n, x;
    cin >> n;
    map<ll, ll> m1, m2;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        m1[x]++;
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        m2[x]++;
    }
    ll mx = 0;
    for (auto &u : m1)
    {
        x = u.first;
        if (m2.count(x) == 1)
        {
            mx = max(mx, u.second + m2[x]);
        }
        else
        {
            mx = max(mx, u.second);
        }
    }
    for (auto &u : m2)
    {
        x = u.first;
        if (m1.count(x) == 1)
        {
            mx = max(mx, u.second + m1[x]);
        }
        else
        {
            mx = max(mx, u.second);
        }
    }
    dp(mx);
}

signed main()
{
    Fast_ios;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}