#include<bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2, k, m, i, j;
    cin >> n1 >> n2 >> k>>m;
    int a[n1], b[n2];
    for (i = 0; i < n1; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n2; i++) {
        cin >> b[i];
    }
    if (a[k - 1] < b[n2 - m]) {
        cout << "YES\n";

    } else {
        cout << "NO\n";
    }

}
