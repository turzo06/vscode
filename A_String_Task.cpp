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
bool isvowel(char c)
{
    if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u' or c=='y')
    {
        return true;
    }
    else
        return false;
}
// Solution
void solve()
{
    string s;
    cin >> s;
    string tmp;
    for (ll i = 0; i < s.size(); i++)
    {
        char c = tolower(s[i]);
        if (isvowel(c))
        {
            continue;
        }
        else
        {
            tmp += '.';
            tmp += c;
        }
    }
    dp(tmp);
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