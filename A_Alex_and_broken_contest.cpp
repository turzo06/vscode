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
       string s;cin>>s;
       int c=0;
       for(int i=0;i<s.size();i++){
        string tmp3,tmp4,tmp5,tmp6;
        if(s.size()>=3){
            tmp3=s.substr(0,3);if(tmp3=="Ann")c++;
        }
        if(s.size()>=4){
            tmp4=s.substr(0,4);if(tmp4=="Olya")c++;
            }
        if(s.size()>=5){
            tmp5=s.substr(0,5);if(tmp5=="Danil" or tmp5=="Slava")c++;
        }
        if(s.size()>=6){
            tmp6=s.substr(0,6);if(tmp6=="Nikita")c++;
        }
        if(c>1){
            dp("NO");return;
        }
        s.erase(s.begin());i--;
       }
       if(c==1){
        dp("YES");
       }else dp("NO");
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