#include<iostream>

#include<string>


using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, j = 0;
        int num;
        cin>>num;
        int k = num % 10;
        for (i = 1; i < k; i++) {
            j = j + 10;
        }
        if (num > 1000) {
            j = j + 10;
        } else {
            if (num > 100) {
                j = j + 6;
            } else {
                if (num > 10) {
                    j = j + 3;
                } else {
                    j++;
                }
            }
        }
        cout<<j<<endl;
    }
}