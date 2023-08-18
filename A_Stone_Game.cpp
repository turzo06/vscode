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
#define es(num) num.erase(num.begin()) // removing the array's first element
#define asc(v) sort(v.begin(), v.end())
#define dsc(v) sort(v.begin(), v.end(), greater<int>())
#define rev(v) reverse(v.begin(), v.end())
#define unique_resize(v) v.resize(distance(v.begin(), unique(v.begin(), v.end())));
#define Fast_ios ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

// Printing Shortcut
#define dp(x) cout << x << endl
#define dp2(x,y) cout << x << " " << y << endl

//Functions
void vecin(vll &v){for(auto &i:v)cin>>i;}
void vecout(vll &v){for(auto &i:v)cout<<i<<" ";cout<<endl;}
ll gcd(ll a, ll b){return a?gcd(b%a,a):b;}
ll lcm(ll a, ll b){return a/gcd(a,b)*b;}

// Solution
void solve()
{
    ll n;
    cin >> n;
    vll v(n), v1;
    vecin(v);
    v1 = v;
    dsc(v1);
    ll mini = v1[n - 1], maxi = v1[0], mi, mx;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == maxi)
        {
            mx = i + 1;
        }
        if (v[i] == mini)
        {
            mi = i + 1;
        }
    }
    // from first postion or last positon which near
    ll d_mx = min(mx, n - mx + 1);
    ll d_mi = min(mi, n - mi + 1);
    ll ans = 0;
    if (d_mx == d_mi) // both elements near
    {
        ans += d_mx; // using d_mx
        if (abs(mx - mi) < d_mi)
        {
            ans += abs(mx - mi);
        }
        else
        {
            ans += d_mi;
        }
    }
    else if (d_mx < d_mi) // if d_mx near
    {
        ans += d_mx;
        if (abs(mx - mi) < d_mi)
        {
            ans += abs(mx - mi);
        }
        else
            ans += d_mi;
    }
    else if (d_mx > d_mi) // if d_mi near
    {
        ans += d_mi;
        if (abs(mi - mx) < d_mx)
        {
            ans += abs(mi - mx);
        }
        else
            ans += d_mx;
    }
    dp(ans);
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