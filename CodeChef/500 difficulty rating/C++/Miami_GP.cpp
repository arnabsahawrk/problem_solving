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

        if ((x * 1.07) >= y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
