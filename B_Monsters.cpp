/******************CODE*********************/
#include <bits/stdc++.h>
using namespace std;
typedef vector<string> vstr;
typedef vector<long long> vll;
#define pb push_back
#define ll long long
#define all(v) v.begin(),v.end()
#define acs(v, x) accumulate(all(v), x);
#define acm(v,x) accumulate(all(v), 1,multiplies<ll>());
#define ers(num) num.erase(num.begin()) // removing the array's first element
#define asc(v) sort(all(v))
#define dsc(v) sort(v.begin(), v.end(), greater<int>())
#define rev(v) reverse(all(v))
#define unique_resize(v) v.resize(distance(v.begin(), unique(all(v))));
#define Fast_ios ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

// Printing Shortcut
#define dp(x) cout << x << endl
#define dp2(x,y) cout << x << " " << y << endl

//Functions
void vecin(vll &v){for(auto &u:v)cin>>u;}
void vecout(vll &v){for(auto &u:v)cout<<u<<" ";cout<<endl;}
ll gcd(ll a, ll b){return a?gcd(b%a,a):b;}
ll lcm(ll a, ll b){return a/gcd(a,b)*b;}

bool comp(pair<ll,ll> &a, pair<ll,ll> &b){
    return a.first>b.first or (a.first==b.first and a.second<b.second);
}
// Solution
void solve()
{
    ll n, k, x;
    cin >> n >> k;
    vector<pair<ll, ll>> vp, v;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        if (x % k == 0)
        {
            cout << i + 1 << " ";
        }
        else
            vp.pb({(x % k), i + 1});
    }
    sort(all(vp), comp);
    for (auto &u : vp)
    {
        // cout << u.second << " ";
        dp2(u.first,u.second);
    }
    cout << endl;
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