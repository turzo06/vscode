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
//const ll mod=1e9+7;
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
    vll v(6);ll f=0,l=0,cnt=0,d;
    for(auto&u:v){
        cnt++;char c;cin>>c;u=(c-'0');
        if(cnt<=3){
            f+=u;
        }else l+=u;
    }
    if(f>l){//making first half sum smaller
        swap(f,l);
        for(int i=0;i<3;i++){
            swap(v[i],v[3+i]);
        }
    }
    for(int i=0;i<3;i++){v[i]=9-v[i];};dsc(v);d=l-f;cnt=0;
    while(d>0){
        d-=v[cnt];cnt++;
    }dp(cnt);
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