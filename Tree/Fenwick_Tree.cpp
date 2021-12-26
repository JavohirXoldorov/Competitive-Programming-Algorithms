#include <bits/stdc++.h>
using namespace std;
int const N = 1e5 + 7;
int fenwick[N];
void add(int i, int k)
{
    while (i < N)
    {
        fenwick[i] += k;
        i += i & -i;
    }
}
int sum(int i)
{
    int s = 0;
    while (i > 0)
    {
        s += fenwick[i];
        i -= i & -i;
    }
    return s;
}

int main()
{
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        add(i + 1, a);
    }
    int q, x, l, r;
    cin >> q;
    while (q--)
    {
        cin >> l >> r;
        cout << sum(r) - sum(l - 1) << '\n';
    }
    return 0;   
}