#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if ((y * 2) <= x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
