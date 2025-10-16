#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        int zero = 0, one = 0, two = 0, three = 0, five = 0, picked = 0;
        bool flag = true;
        while (n--)
        {
            int x;
            cin >> x;

            picked++;

            if (x == 0)
                zero++;
            else if (x == 1)
                one++;
            else if (x == 2)
                two++;
            else if (x == 3)
                three++;
            else if (x == 5)
                five++;

            if (zero >= 3 && one >= 1 && two >= 2 && three >= 1 && five >= 1 && flag)
            {
                cout << picked << endl;
                flag = false;
            }
        }

        if (flag)
            cout << 0 << endl;
    }

    return 0;
}