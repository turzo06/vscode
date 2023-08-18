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
    int Xa, Ya, Xb, Yb, Xf, Yf;
    cin >> Xa >> Ya >> Xb >> Yb >> Xf >> Yf;
    int ab_dis = abs(Xa - Xb) + abs(Ya - Yb);
    if (Xa == Xb && Xb == Xf) // checking if column wise distance same
    {
        if (abs(Ya - Yb) > max(abs(Ya - Yf), abs(Yb - Yf))) // if f in the middle of a,b
        {
            ab_dis += 2;
        }
    }
    else if (Ya == Yb && Yb == Yf) // checking if row wise distance same
    {
        if (abs(Xa - Xb) > max(abs(Xa - Xf), abs(Xb - Xf))) // if f in the middle of a,b
        {
            ab_dis += 2;
        }
    }
    dp(ab_dis);
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