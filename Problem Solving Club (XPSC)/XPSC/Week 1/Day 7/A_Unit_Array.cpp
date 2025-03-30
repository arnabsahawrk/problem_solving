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

        int negOne = 0, posOne = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x < 0)
                negOne++;
            else
                posOne++;
        }

        int numberOfOps = 0;
        while (negOne > posOne || negOne % 2 == 1)
        {
            negOne--;
            posOne++;
            numberOfOps++;
        }

        cout << numberOfOps << endl;
    }

    return 0;
}