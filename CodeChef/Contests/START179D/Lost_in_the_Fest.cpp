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

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= arr[n - 1])
            {
                cout << n - (i + 1) << endl;
                flag = false;
                break;
            }
        }

        if (flag)
            cout << 0 << endl;
    }

    return 0;
}