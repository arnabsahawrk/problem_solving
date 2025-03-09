#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        if (k == 1 && !is_sorted(arr.begin(), arr.end()))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}