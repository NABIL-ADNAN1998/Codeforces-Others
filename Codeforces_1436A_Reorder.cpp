#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int m;
        int i, j, n;
        cin >>n>>m;
        double a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        double count = 0;
        for (j = 0; j < n; j++) {
            for (i = j; i < n; i++) {
                count += double (a[i] / (i + 1));
            }

        }

        cout << (count == m ? "YES" : "NO") << endl;
        count = 0;
    }
}
