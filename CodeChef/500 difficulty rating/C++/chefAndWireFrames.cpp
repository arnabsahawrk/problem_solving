#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, x;
        cin >> n >> m >> x;

        cout << ((n * 2) + (m * 2)) * x << endl;
    }
}
