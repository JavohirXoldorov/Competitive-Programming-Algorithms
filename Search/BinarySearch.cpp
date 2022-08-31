#include <bits/stdc++.h>
using namespace std;  
int search(int arr[], int find, int n)
{
    sort(arr, arr + n);
    int index = -1, l = 0, r = n - 1;

    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == find)
        {
            index = mid;
            break;
        }
        else if (arr[mid] < find)
            l = mid + 1;
        else
            r = mid - 1;
    }

    return index;
}
int main()
{
    int n, find;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> find;
    cout << search(arr, find, n) << "\n";
    return 0;
}