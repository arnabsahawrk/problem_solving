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

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int ops = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] <= arr[i + 1])
            {
                int diff = arr[i + 1] - arr[i];
                ops = min(ops, (diff / 2 + 1));
            }
            else
                ops = 0;
        }

        cout << ops << endl;
    }

    return 0;
}