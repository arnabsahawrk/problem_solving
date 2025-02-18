#include <iostream>
#include <vector>
using namespace std;

bool isPossible(const vector<int>& b) {
    int m = b.size();
    for (int i = 0; i < m - 2; ++i) {
        if (b[i] == 1 && b[i+1] == 0 && b[i+2] == 1) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n - 2);
        for (int& x : b) cin >> x;
        
        if (isPossible(b)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}