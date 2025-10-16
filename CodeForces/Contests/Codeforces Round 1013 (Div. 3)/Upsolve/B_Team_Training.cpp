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
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.rbegin(), arr.rend());

        int last = -1, count = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] * (i - last) >= x)
            {
                count++;
                last = i;
            }
        }

        cout << count << endl;
    }

    return 0;
}