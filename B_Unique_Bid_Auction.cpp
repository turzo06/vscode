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
    unordered_map<ll, ll> m;
    deque<ll> v, v1;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        v.pb(x);
        m[x]++;
    }
    for (auto &u : m)
    {
        if (u.second == 1)
        {
            v1.pb(u.first);
        }
    }
    asc(v1);
    for (ll i = 0; i < n; i++)
    {
        if (v[i] == v1[0])
        {
            dp(i + 1);
            return;
        }
    }
    dp(-1);
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