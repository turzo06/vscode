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
void printyes(int n, int x)
{
    dp("YES");
    dp(n);
    for (int i = 0; i < n; i++)
    {
        cout << x << " ";
    }
    cout << endl;
}

// Solution
void solve()
{
    int n, k, x, i = 0, even = 0, odd = 0;
    cin >> n >> k >> x;
    set<int> st;
    while (k--)
    {
        i++;
        if (i != x)
        {
            st.insert(i);
        }
    }
    if (st.count(1))
    {
        printyes(n, 1);
        return;
    }
    else if (st.count(2) && (!(n & 1)))
    {
            dp("YES");
            dp(n / 2);
            for (int i = 0; i < n / 2; i++)
            {
            cout << 2 << " ";
            }
            cout << endl;
            return;
    }
    else if (st.count(2) && st.count(3))
    {
            dp("YES");
            int x = 3, c = 1;
            while (x != n)
            {
            x += 2;
            c++;
            }
            dp(c);
            cout << 3 << " ";
            c -= 1;
            while (c--)
            {
            cout << 2 << " ";
            }
            cout << endl;
            return;
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