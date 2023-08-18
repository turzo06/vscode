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
    ll a, b, c, mx = 0;
    vll v(3, 0), v1(3, 0);
    cin >> v[0] >> v[1] >> v[2];
    v1 = v;
    dsc(v1);
    mx = v1[0];
    if (v[0] == v[1] && v[1] == v[2])
    {
        cout << 1 << " " << 1 << " " << 1 << endl;
        return;
    }
    else if (v[0] == mx)
    {
        if (v[0] == v[1] && v[1] != v[2])
        {
            cout << v[0] - mx + 1 << " " << v[1] - mx + 1 << " " << v[1] - v[2] + 1 << endl;
        }
        else if (v[0] == v[2] && v[2] != v[1])
        {
            cout << v[0] - mx + 1 << " " << v[0] - v[1] + 1 << " " << v[2] - mx + 1 << endl;
        }
        else
        {
            cout << v[0] - mx << " " << v[0] - v[1] + 1 << " " << v[0] - v[2] + 1 << endl;
        }
    }
    else if (v[1] == mx)
    {
        if (v[0] == v[1] && v[1] != v[2])
        {
            cout << v[0] - mx + 1 << " " << v[1] - mx + 1 << " " << v[1] - v[2] + 1 << endl;
        }
        else if (v[1] == v[2] && v[1] != v[0])
        {
            cout << v[1] - v[0] + 1 << " " << v[1] - mx + 1 << " " << v[2] - mx + 1 << endl;
        }
        else
        {
            cout << v[1] - v[0] + 1 << " " << v[1] - mx << " " << v[1] - v[2] + 1 << endl;
        }
    }
    else if (v[2] == mx)
    {
        if (v[0] == v[2] && v[1] != v[2])
        {
            cout << v[0] - mx + 1 << " " << v[2] - v[1] + 1 << " " << v[2] - mx + 1 << endl;
        }
        else if (v[1] == v[2] && v[2] != v[0])
        {
            cout << v[2] - v[0] + 1 << " " << v[1] - mx + 1 << " " << v[2] - mx + 1 << endl;
        }
        else
        {
            cout << v[2] - v[0] + 1 << " " << v[2] - v[1] + 1 << " " << v[2] - mx << endl;
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