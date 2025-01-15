#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int w, x, y, z;
        cin >> w >> x >> y >> z;

        int total = w + (y * z);

        if (total == x)
            cout << "filled" << endl;
        else if (total > x)
            cout << "overflow" << endl;
        else
            cout << "unfilled" << endl;
    }
}
