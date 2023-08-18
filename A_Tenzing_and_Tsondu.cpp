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
    int n, m;
    cin >> n >> m;
    vll a(n), b(m);
    vecin(a);vecin(b);asc(a);asc(b);
    while (!(a.empty() or b.empty()))
    {
        if (a.front() == b.front())
        {
            ers(a);
            ers(b);
        }
        else if (a.front() > b.front())
        {
            a.front() = a.front() - b.front();
            ers(b);
        }
        else if (a.front() < b.front())
        {
            b.front() = b.front() - a.front();
            ers(a);
        }
    }
    if (!a.empty() && b.empty())
    {
        dp("Tsondu");
    }
    else if (a.empty() && !b.empty())
    {
        dp("Tenzing");
    }
    else
        dp("Draw");
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