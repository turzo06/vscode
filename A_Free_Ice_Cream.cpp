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
    ll n, x, c = 0, m=0, total=0;
    cin >> n >> x;
    char s;
    total = x;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> m;
        if (s == '-')
        {
            if (total >= m)
            {
                total -= m;
            }
            else if (total < m)
            {
                c++;
            }
        }
        else
            total += m;
    }
    dp2(total, c);
}

signed main()
{
    Fast_ios;
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}