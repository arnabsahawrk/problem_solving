#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.rbegin(), arr.rend());
    long long ans = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i] = min(arr[i - 1] - 1, arr[i]);

        if (arr[i] == 0)
            break;

        ans += arr[i];
    }

    cout << ans << endl;

    return 0;
}