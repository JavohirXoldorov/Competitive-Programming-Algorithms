#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define elif else if
#define pb push_back
#define mod 1000000007
#define sz(s) ((int)s.size())
#define lz(s) ((int)s.length())
#define MP(a, b) make_pair(a, b)
#define INF 123456789012345678LL
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i, a, n) for (int i = (a); i < (n); i++)
#define zrep(i, x) for (int i = 0; i < x; i++)
#define rrep(i, n) for (int i = int(n) - 1; i >= 0; --i)
#define db(x) cerr << #x << " = " << x << endl
#define print(x) cout << x << '\n'
#define ln cout << '\n'
#define rt return

typedef long long ll;
typedef long double ld;

using P = pair<int, int>;
using VI = vector<int>;
using VP = vector<P>;
using VVI = vector<VI>;
using VL = vector<ll>;
using VVL = vector<VL>;

int const mxSize = 1e6 + 7;

void FAST()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// int tree[4 * mxSize], a[mxSize];
// void build(int v, int l, int r)
// {
//     if (l == r)
//     {
//         tree[v] = a[l];
//         return;
//     }
//     int m = (l + r) / 2;
//     build(v * 2, l, m);
//     build(v * 2 + 1, m + 1, r);
//     tree[v] = min(tree[v * 2], tree[v * 2 + 1]);
// }
// void upd(int v, int l, int r, int index, int value)
// {
//     if (l == r)
//     {
//         tree[v] = value;
//         return;
//     }
//     int m = (l + r) / 2;
//     if (index <= m)
//     {
//         upd(v * 2, l, m, index, value);
//     }
//     else
//         upd(v * 2 + 1, m + 1, r, index, value);
//     tree[v] = min(tree[v * 2], tree[v * 2 + 1]);
// }
// int get(int v, int tl, int tr, int l, int r)
// {
//     if (tl > r || tr < l)
//     {
//         return 1e9;
//     }
//     if (l <= tl && tr <= r)
//     {
//         return tree[v];
//     }
//     int tm = (tl + tr) / 2;
//     return min(get((v * 2), tl, tm, l, r), get(v * 2 + 1, tm + 1, tr, l, r));
// }
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