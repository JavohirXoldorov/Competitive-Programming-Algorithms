#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define pb push_back
#define elif else if
#define mod 1000000007
#define sz(s) ((int)s.size())
#define lz(s) ((int)s.length())
#define MP(a, b) make_pair(a, b)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i, a, n) for (int i = (a); i < (n); i++)
#define zrep(i, x) for (int i = 0; i < x; i++)
#define rrep(i, n) for (int i = int(n) - 1; i >= 0; --i)
#define db(x) cerr << #x << " = " << x << endl
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define sp(a) fixed << setprecision(a)
#define cases(i) cout << "Case " << i << ":"
#define print(x) cout << x << '\n'
#define countv(v, a) count(all(v), a)
#define cntone(x) __builtin_popcountll(x) // number of ones
#define cntzero(x) __builtin_ctzll(x)     // number of zeros
#define SUM accumulate
#define toint(a) atoi(a.c_str())
#define ln cout << '\n'
#define rt return

typedef long long ll;
typedef long double ld;

#define imin LLONG_MIN
#define imax LLONG_MAX

using P = pair<int, int>;
using VI = vector<int>;
using VP = vector<P>;
using VVI = vector<VI>;
using VL = vector<ll>;
using VVL = vector<VL>;

/// Constants
#define mx 10000007
#define MOD 1000000009
#define base 1000000007
#define eps 1e-9
#define INF 1llu << 61 // 2,305,843,009,213,693,952
#define inf 1 << 29    // 536,870,912
#define PI acos(-1.0)  // 3.1415926535897932

int const mxSize = 1e6 + 7;

void FAST()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
ll bin_power(ll a, ll b, ll m)
{
    if (b == 0)
        return 1;
    ll k = bin_power(a, b / 2, m);
    k = (k * k) % m;
    if (b % 2 == 1)
        k = (k * a) % m;
    return k;
}

ll ll_gcd(ll a, ll b) { return b ? ll_gcd(b, a % b) : a; }
int tree[4 * mxSize], a[mxSize];
void build(int v, int l, int r)
{
    if (l == r)
    {
        tree[v] = a[l];
        return;
    }
    int m = (l + r) / 2;
    build(v * 2, l, m);
    build(v * 2 + 1, m + 1, r);
    tree[v] = min(tree[v * 2], tree[v * 2 + 1]);
}
void upd(int v, int l, int r, int index, int value)
{
    if (l == r)
    {
        tree[v] = value;
        return;
    }
    int m = (l + r) / 2;
    if (index <= m)
    {
        upd(v * 2, l, m, index, value);
    }
    else
        upd(v * 2 + 1, m + 1, r, index, value);
    tree[v] = min(tree[v * 2], tree[v * 2 + 1]);
}
int get(int v, int tl, int tr, int l, int r)
{
    if (tl > r || tr < l)
    {
        return 1e9;
    }
    if (l <= tl && tr <= r)
    {
        return tree[v];
    }
    int tm = (tl + tr) / 2;
    return min(get((v * 2), tl, tm, l, r), get(v * 2 + 1, tm + 1, tr, l, r));
}
void solve()
{
}

int main()
{
    // #ifdef LOCAL
    // freopen("input.txt", "r" , stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    FAST();
    int TEST = 1;
    cin >> TEST;
    while (TEST--)
    {
        solve();
    }

    rt 0;
}