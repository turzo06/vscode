/******************CODE*********************/
#include <bits/stdc++.h>
using namespace std;
typedef vector<string> vstr;
typedef vector<long long> vll;
#define pb push_back
#define ll long long
#define endl "\n"
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
       int n,x,i1=0,ans;cin>>n;ll l=0,r=0;
       vector<int> v1(n),v2(n);
       for(int i=0;i<n;i++){
        cin>>v1[i]>>v2[i];
        l+=v1[i];r+=v2[i];
       }
       int mx=abs(l-r);
       for(int i=0;i<n;i++){
        l-=v1[i];r-=v2[i];l+=v2[i];r+=v1[i];
        if(mx<abs(l-r)){
            i1=i+1;mx=abs(l-r);
        }
        l+=v1[i];l-=v2[i];r+=v2[i];r-=v1[i];
       }
       dp(i1);
       
       

       

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