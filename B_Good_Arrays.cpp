/******************CODE*********************/
#include <bits/stdc++.h>
using namespace std;
typedef vector<string> vstr;
typedef vector<long long> vll;
#define pb push_back
#define ll long long
#define all(v) v.begin(),v.end()
#define acs(v, x) accumulate(all(v), x);
#define acm(v,x) accumulate(all(v), 1,multiplies<ll>());
#define ers(num) num.erase(num.begin()) // removing the array's first element
#define asc(v) sort(all(v))
#define dsc(v) sort(v.begin(), v.end(), greater<int>())
#define rev(v) reverse(all(v))
#define unique_resize(v) v.resize(distance(v.begin(), unique(all(v))));
#define Fast_ios ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

//Shortcut
#define dp(x) cout << x << endl
#define dp2(x,y) cout << x << " " << y << endl
void print(){cout<<endl;}template<typename T,typename... A>void print(const T& a,const A&... z){cout<<a<<' ';print(z...);}
void input(){}template<typename T,typename... A>void input(T& a,A&... z){cin>>a;input(z...);}
template<typename T>void print(vector<T>& v){for(auto& i:v)cout<<i<<' ';cout<<endl;}
template<typename T,typename S>void print(vector<T>& v,S s){for(auto& i:v)cout<<i<<s;}
template<typename T>void input(vector<T> &v){for(auto& i:v)cin>>i;}


// Solution
void solve()
{
       ll n,mx=0,c=0;
       cin>>n;
      vll v(n);for(auto&u:v){cin>>u;mx+=u;if(u==1)c++;}
        if(mx>=c+n && n!=1){
            dp("YES");
        }else dp("NO");
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