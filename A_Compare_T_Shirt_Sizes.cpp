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
    string s, s1;
    cin >> s >> s1;
    ll n = s.size(), n1 = s1.size();
    if (n > 2)
    {
        s = s.substr(n - 2, 2);
    }
    if (n1 > 2)
    {
        s1 = s1.substr(n1 - 2, 2);
    }
    map<string, ll> m;
    m["XL"] = 5;
    m["L"] = 4;
    m["M"] = 3;
    m["S"] = 2;
    m["XS"] = 1;
     if (m[s] > m[s1])
    {
        dp(">");
    }
    else if(m[s] < m[s1]){
        dp("<");
    }
    else
    {
        if (s == "XL")
        {
            if (n > n1)
            {
                dp(">");
            }
            else if (n < n1)
            {
                dp("<");
            }
            else
                dp("=");
        }
        else if (s == "XS")
        {
            if (n > n1)
            {
                dp("<");
            }
            else if (n < n1)
            {
                dp(">");
            }
            else
                dp("=");
        }
        else if (n < n1)
        {
            dp("<");
        }
        else if (n > n1)
        {
            dp(">");
        }
        else
        {
            dp("=");
        }
    }
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