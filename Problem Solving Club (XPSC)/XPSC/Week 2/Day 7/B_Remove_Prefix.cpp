#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'

int main()
{
    fast_io;

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vi arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        map<int, bool> mp;
        bool flag = true;
        for (int i = n - 1; i >= 0; i--)
        {
            if (mp.find(arr[i]) != mp.end())
            {
                cout << n - mp.size() << endl;
                flag = false;
                break;
            }

            mp[arr[i]] = true;
        }

        if (flag)
            cout << 0 << endl;
    }

    return 0;
}