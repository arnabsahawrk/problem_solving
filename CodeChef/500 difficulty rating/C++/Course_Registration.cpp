#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        (n + k) <= m ? cout << "Yes" << endl : cout << "No" << endl;
    }
}
