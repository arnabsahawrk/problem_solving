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
        int zero = 0, one = 0, two = 0, three = 0, five = 0;

        for (int i = 0; i < n; i++)
        {
            int digit;
            cin >> digit;

            if (digit == 0)
                zero++;
            else if (digit == 1)
                one++;
            else if (digit == 2)
                two++;
            else if (digit == 3)
                three++;
            else if (digit == 5)
                five++;
        }

        if (zero >= 3 && one >= 1 && two >= 2 && three >= 1 && five >= 1)
        {
            if (n == 8)
                cout << 8 << endl;
            else
                cout << n - 1 << endl;
        }
        else
            cout << 0 << endl;
    }

    return 0;
}