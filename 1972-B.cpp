
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
        string s;
        cin >> s;
        int u = 0, d = 0;
        for (auto c : s)
        {
            if (c == 'U')
            {
                u++;
            }
            else
            {
                d++;
            }
        }

        if (u % 2 == 0)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
}
