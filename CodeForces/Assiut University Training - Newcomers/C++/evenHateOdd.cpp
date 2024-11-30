#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int array[n];
        for (int i = 0; i < n; i++)
            cin >> array[i];

        if (n & 1)
            cout << -1 << endl;
        else
        {
            int odd = 0;
            for (int i = 0; i < n; i++)
            {
                if (array[i] & 1)
                    odd++;
            }

            int result = (n / 2) - odd;

            if (result < 0)
                result *= -1;

            cout << result << endl;
        }
    }

    return 0;
}