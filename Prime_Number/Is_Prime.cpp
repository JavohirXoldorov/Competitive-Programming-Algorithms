#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mulmod(ll a, ll b, ll c)
{
    ll x = 0, y = a % c;
    while (b)
    {
        if (b & 1)
            x = (x + y) % c;
        y = (y << 1) % c;
        b >>= 1;
    }
    return x % c;
}

ll fastPow(ll x, ll n, ll MOD)
{
    ll ret = 1;
    while (n)
    {
        if (n & 1)
            ret = mulmod(ret, x, MOD);
        x = mulmod(x, x, MOD);
        n >>= 1;
    }
    return ret;
}

bool isPrime(ll n)
{
    ll d = n - 1;
    int s = 0;
    while (d % 2 == 0)
    {
        s++;
        d >>= 1;
    }

    int a[9] = {2, 3, 5, 7, 11, 13, 17, 19, 23};
    for (int i = 0; i < 9; i++)
    {
        bool comp = fastPow(a[i], d, n) != 1;
        if (comp)
            for (int j = 0; j < s; j++)
            {
                ll fp = fastPow(a[i], (1LL << (ll)j) * d, n);
                if (fp == n - 1)
                {
                    comp = false;
                    break;
                }
            }
        if (comp)
            return false;
    }
    return true;
}
int main()
{
    ll n;
    int a[9] = {2, 3, 5, 7, 11, 13, 17, 19, 23};
    cin >> n;
    if (n <= 23)
    {
        bool f = false;
        for (int i = 0; i < 9; i++)
        {
            if (a[i] == n)
                f = true;
        }
        if (f)
            cout << "YES";
        else
            cout << "NO";
    }
    else
    {
        if (isPrime(n))
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
}
