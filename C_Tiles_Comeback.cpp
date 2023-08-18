/******************CODE*********************/
#include <bits/stdc++.h>
using namespace std;
typedef vector<string> vstr;
typedef vector<long long> vll;
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
    ll n, k, x;
    cin >> n >> k;
    map<ll, ll> m;
    vll v;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        v.pb(x);
        m[x]++;
    }
    if (m[v[0]] >= k && v[0] == v[n - 1])
    {
        dp("YES");
        return;
    }
    if (m[x] < k or m[v[0]] < k)
    {
        dp("NO");
        return;
    }
    ll l = 0, r = n - 1, c = 0, f = 0, ri = 0;
    while (l <= r)
    {
        if (v[0] == v[l])
        {
            c++;
        }
        l++;
        if (c == k)
        {
            while (f != k)
            {
                if (v[n - 1] == v[r])
                {
                    f++;
                }
                r--;
                ri++;
            }
            break;
        }
    }
    n = n - l;
    if (ri <= n)
    {
        dp("YES");
    }
    else
        dp("NO");
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