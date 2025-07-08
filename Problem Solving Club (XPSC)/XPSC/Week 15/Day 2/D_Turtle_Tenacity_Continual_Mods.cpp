#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a, a + n);
        if(a[0] != a[1]) {
            cout << "YES\n";
        }
        else {
            bool PASS = 0;
            for(int i=1; i<n; i++) {
                if(a[i] % a[0] != 0) PASS = 1;
            }
            if(PASS) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}