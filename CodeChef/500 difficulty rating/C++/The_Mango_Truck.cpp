#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int maxMango = 0;
        while (true)
        {
            y += x;

            if (y <= z)
                maxMango++;
            else
                break;
        }

        cout << maxMango << endl;
    }
}
