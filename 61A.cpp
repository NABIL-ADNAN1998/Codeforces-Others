#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int i;
    for (i = 0; i < a.length(); i++)
    {
        if (a[i] == b[i])
        {
            a[i] = '0';
        }
        else
        {
            a[i] = '1';
        }
    }
    cout << a;
    return 0;
}