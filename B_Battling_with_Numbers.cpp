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
#define unique_resize(v) asc(v),v.resize(distance(v.begin(), unique(all(v))));//nlog(n)
#define Fast_ios ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

//Shortcut
const ll mod = 998244353;
//const ll N=1e8;
//vector<bool> prime(N,true);
#define dp(x) cout << x << endl
#define dp2(x,y) cout << x << " " << y << endl
void print(){cout<<endl;}template<typename T,typename... A>void print(const T& a,const A&... z){cout<<a<<' ';print(z...);}
void input(){}template<typename T,typename... A>void input(T& a,A&... z){cin>>a;input(z...);}
template<typename T>void print(vector<T>& v){for(auto& i:v)cout<<i<<' ';cout<<endl;}
template<typename T,typename S>void print(vector<T>& v,S s){for(auto& i:v)cout<<i<<s;}
template<typename T>void input(vector<T> &v){for(auto& i:v)cin>>i;}
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
//void sieve(){prime[0]=prime[1]=false;for(ll i=2;i<=N;i++){if(prime[i]==true){for(ll j=i*i;j<=N;j+=i){prime[j]=false;}}}}

// Solution
void solve()
{
    unordered_map<ll,ll> m1,m2;
      ll x,y,ans=1;cin>>x;vll v1(x);input(v1);
      for(ll i=0;i<x;i++){
        cin>>y;m1[v1[i]]+=y;
      }
      cin>>y;vll v2(y);input(v2);
    for(ll i=0;i<y;i++){
       cin>>x; m2[v2[i]]+=x;
    }
   for(auto&u:m2){
    if(!(m1[u.first])){
        dp(0);return;
    }
    }
 for(auto&u:m1){
    if(!(m2[u.first])){//not found
        ans=(ans*2)%mod;
    }else{
        if(u.second!=m2[u.first]){//found but power not equal
            ans=(ans*2)%mod;
        }
    }
 }
    dp(ans);
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