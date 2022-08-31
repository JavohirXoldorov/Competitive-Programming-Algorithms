#include <bits/stdc++.h>
using namespace std;
int const N = 1e6 + 7;
bool sieve[N];
void generate_prime_number()
{
    sieve[1] = sieve[2] = false;
    for (int i = 2; i < N; i++)
    {
        if (sieve[i])
            continue;
        for (int j = 2 * i; j <= N; j += i)
        {
            sieve[j] = true;
        }
    }
}
int main()
{
    generate_prime_number();
    int m, n, cnt = 0;
    cin >> m >> n;
    for (int i = m; i <= n; i++)
    {
        if (!sieve[i])
        {
            cout << i << endl;
            cnt++;
        }
    }
    if (cnt == 0)
        cout << "Absent";

    return 0;
}