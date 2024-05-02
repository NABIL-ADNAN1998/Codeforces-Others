#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5], ans[n];

        a[0] = 1000;
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            a[i] += a[i - 1];
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
}