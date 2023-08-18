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

bool check_parity(vll &v)
{
    vll v1(v.size(), -1), v2(v.size(), 1),v3(v.size(),-1);
    ll f = 0;
    for (auto &u : v)
    {
        if (u & 1)
        {
            v1[f] = 1;
        }
        else
        {
            v1[f] = -1;
        }
        f++;
    }
    if (v1 == v2 or v1==v3)
    {
        return true;
    }
    else
        return false;
}
// Solution
void solve()
{
    ll n, x, even = 0, odd = 0;
    cin >> n;
    vll vodd, veven;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (i & 1)
        {
            vodd.pb(x);
        }
        else
            veven.pb(x);
    }
    if (check_parity(vodd) == 1 && check_parity(veven) == 1)
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