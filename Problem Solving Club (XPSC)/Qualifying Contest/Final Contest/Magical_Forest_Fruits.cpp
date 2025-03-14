#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<long long> arr(n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        arr[i] = sum;
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        if (l == 0)
            cout << arr[r] << endl;
        else
        {
            cout << arr[r] - arr[l - 1] << endl;
        }
    }

    return 0;
}