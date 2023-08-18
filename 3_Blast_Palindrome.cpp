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
bool palindrome(string s){
    string s1;
    s1=s;
    rev(s);
    if(s==s1){
    return true;
    }else return false;
}
// Solution
void solve()
{
    string s;
    cin >> s;
    // if (palindrome(s))
    // {
    // dp("YES");
    // return;
    // }
    int c = 0;
    for (int i = 1; i < s.size(); i++)
    {
    if (s[i] == s[i - 1])
    {
        c++;
        continue;
    }
    else
    {
        if (c > 0)
        {
            c = 0;
            continue;
        }
        else
        {
            if (i + 1 < s.size())
            {
                s.erase(s.begin() + (i - 1), s.begin() + (i + 1));
                i -= 3;
            }
        }
    }
    if (palindrome(s))
    {
        dp("Yes");
        return;
    }
    }
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