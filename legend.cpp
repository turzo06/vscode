// LUOGU_RID: 120738532
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pdi = pair<double, int>;
using pdd = pair<double, double>;
using ull = unsigned long long;

#define ppc(x) __builtin_popcount(x)
#define clz(x) __builtin_clz(x)

bool Mbe;
// mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
mt19937_64 rnd(1064);
int rd(int l, int r) { return rnd() % (r - l + 1) + l; }

constexpr int mod = 998244353;
void addt(int &x, int y) { x += y, x >= mod && (x -= mod); }
int add(int x, int y) { return x += y, x >= mod && (x -= mod), x; }
int ksm(int a, int b)
{
    int s = 1;
    while (b)
    {
        if (b & 1)
            s = 1ll * s * a % mod;
        a = 1ll * a * a % mod, b >>= 1;
    }
    return s;
}

constexpr int Z = 1e6 + 5;
int fc[Z], ifc[Z];
int bin(int n, int m)
{
    if (n < m)
        return 0;
    return 1ll * fc[n] * ifc[m] % mod * ifc[n - m] % mod;
}
void init_fac(int Z)
{
    for (int i = fc[0] = 1; i < Z; i++)
        fc[i] = 1ll * fc[i - 1] * i % mod;
    ifc[Z - 1] = ksm(fc[Z - 1], mod - 2);
    for (int i = Z - 2; ~i; i--)
        ifc[i] = 1ll * ifc[i + 1] * (i + 1) % mod;
}

// ---------- templates above ----------

constexpr int N = 200 + 5;

int n, d[N];
bool query(int i, int j)
{
    cout << "? " << i << " " << j << endl;
    char res;
    cin >> res;
    return res == '>';
}
void f(vector<int> &lose)
{
    memset(d, 0, N << 2);
    for (int i = 0; i < lose.size(); i++)
    {
        for (int j = 0; j < lose.size(); j++)
        {
            if (i == j)
                continue;
            if (query(lose[i], lose[j]))
                d[lose[j]]++;
            else
                d[lose[i]]++;
        }
    }
    sort(lose.begin(), lose.end(), [&](int x, int y)
         { return d[x] < d[y]; });
}
void mian()
{
    cin >> n;
    vector<int> win, lose;
    for (int i = 1; i <= n + n; i += 2)
    {
        if (query(i, i + 1))
            win.push_back(i), lose.push_back(i + 1);
        else
            lose.push_back(i), win.push_back(i + 1);
    }
    f(lose);
    vector<int> arr;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (query(lose[i], win[j]))
            {
                arr.push_back(win[j]);
            }
        }
    }
    sort(arr.begin(), arr.end());
    arr.resize(unique(arr.begin(), arr.end()) - arr.begin());
    f(arr);
    if (!arr.size())
    {
        win.erase(find(win.begin(), win.end(), ((lose[0] - 1) ^ 1) + 1));
        f(win), query(lose[0], win.back());
    }
    cout << "! " << endl;
}

bool Med;
int main()
{
    fprintf(stderr, "%.3lf MB\n", (&Mbe - &Med) / 1048576.0);
    int T = 1;
    cin >> T;
    while (T--)
        mian();
    cerr << 1e3 * clock() / CLOCKS_PER_SEC << " ms\n";
    return 0;
}
