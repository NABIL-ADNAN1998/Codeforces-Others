#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, j = 0, ans = 0;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;

        for (int i = 0; i < m && j < n; i++)
        {
            if (b[i] == a[j])
            {
                j++;
                ans++;
            }
        }

        cout << ans << endl;
    }
}