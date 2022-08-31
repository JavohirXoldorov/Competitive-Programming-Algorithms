#include <bits/stdc++.h>
using namespace std;
int a[100];
char c[100];
int n, s;
void rec(int i, int sum)
{
    if (i == n)
    {
        if (sum == s)
        {
            cout << a[0];
            for (int i = 1; i < n; i++)
            {
                cout << c[i] << a[i];
            }
            cout << "=" << s << "\n";
            exit(0);
        }
        return;
    }
    c[i] = '+';
    rec(i + 1, sum + a[i]);
    c[i] = '-';
    rec(i + 1, sum - a[i]);
}
int main()
{

    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    rec(1, a[0]);

    return 0;
}