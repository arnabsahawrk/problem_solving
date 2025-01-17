#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int c, x, y;
        cin >> c >> x >> y;

        if (c == x)
            cout << 0 << endl;
        else
            cout << ((c - x) * y) << endl;
    }
}
