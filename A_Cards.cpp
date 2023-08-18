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
       int n;
       cin>>n;
       string s;
       cin>>s;
       int o=0,nn=0,e=0,r=0,z=0;
       for (int i = 0; i < n; i++)
       {
           if (s[i] == 'n')
           {
               nn++;
           }
           else if (s[i] == 'z')
           {
               z++;
           }
           else if (s[i] == 'e')
           {
               e++;
           }
           else if (s[i] == 'r')
           {
               r++;
           }
           else
               o++;
       }
       int one=min(o,nn);
       one=min(one,e);
       o-=one;
       nn-=one;
       e-=one;
       int zero=min(z,e);
       zero=min(zero,r);
       zero=min(zero,o);
       while(one--){
        cout<<1<<" ";
       }
       while(zero--){
        cout<<0<<" ";
       }
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