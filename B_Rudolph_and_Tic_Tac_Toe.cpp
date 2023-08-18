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
    char a, b, c, d, e, f, g, h, k;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> k;
    map<char, int> m;
    if ((a == b) && (b == c))
    {
        m[a]++;
       }
       if ((d == e) && (e == f))
       {
        m[d]++;
       }
       if ((g == h) && (h == k))
       {
        m[g]++;
       }
       if ((a == d) && (d == g))
       {
        m[a]++;
       }
       if ((b == e) && (e == h))
       {
        m[b]++;
       }
       if ((c == f) && (f == k))
       {
        m[c]++;
       }
       if ((a == e) && e == k)
       {
        m[e]++;
       }
       if ((c == e) && (e == g))
       {
        m[c]++;
       }
       int cnt = 0;
       char x;
       for (auto &u : m)
       {
        if (u.first != '.' && u.second > 0)
        {
            cnt++;
            x = u.first;
        }
       }
       if (cnt == 1)
       {
        dp(x);
       }
       else
        dp("DRAW");
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