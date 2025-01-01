#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string ss;
        cin >> n >> ss;

        int zero = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            if (ss[i] == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }

        cout << abs(zero - one) << endl;
    }

    return 0;
}