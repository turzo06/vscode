/******************CODE*********************/
#include <bits/stdc++.h>
using namespace std;
typedef vector<string> vstr;
typedef vector<long long> vll;
#define pb push_back
#define ll long long
#define all(v) v.begin(),v.end()
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

ll acs(vll &v){
    ll ans=0;
    for(ll i=0;i<v.size();i++){
        ans+=v[i];
    }
    return ans;
}
// Solution
void solve()
{
       ll n,x;input(n,x);
       vll v(n);input(v);
       ll l=0,r=n-1,len1=n,len2=n;
       ll s1,s2=acs(v);s1=s2;
       while(s1%x==0 && l<n){
       s1-=v[l];l++;len1--;
       }
       while(s2%x==0 && r>=0){
       s2-=v[r];r--;len2--;
       }
      ll c=max(len1,len2);
      if (c == 0)
       dp(-1);
      else
       dp(c);
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