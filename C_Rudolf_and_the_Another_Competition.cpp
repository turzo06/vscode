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
ll presum(vll v,ll x){
    ll sum=v[0];
    for(ll i=1;i<x;i++){
        v[i]+=v[i-1];
    }
    ll ans=accumulate(v.begin(),v.begin()+x,0);
    return ans;
}

// Solution
void solve()
{
    ll n, m, h, r_position=1,r_c,r_p;
    cin >> n >> m >> h;

    for (ll i = 0; i < n; i++)
    {
        vll v(m), v1;
        vecin(v);
        asc(v);
        v1 = v;
        asc(v1);
        ll sum=0, c = 0;
        for (ll i = 0; i < v.size(); i++)
        {
            sum += v[i];
            if (sum <= h)
            {
                c++;
            }
        }
        ll p = presum(v1, c);
        if (i == 0)
        {
            r_p = p;
            r_c = c;
        }
        if(c>r_c or (r_c==c && r_p>p)){
            r_position++;
        }
    }
    dp(r_position);
   
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