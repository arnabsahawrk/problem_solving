#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        ll i = n - 1, ans = 0;
        for (ll k = n - 2; k >= 0; k--)
        {
            for (ll j = 0; j < n; j++)
            {
                if (j == k || j == i)
                    continue;

                ans = max(ans, (arr[i] % (arr[j] + arr[k])));
            }
        }

        cout << max(arr[n - 2], ans) << endl;
    }

    return 0;
}