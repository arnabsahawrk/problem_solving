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
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

int main()
{
    fast_io;

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, k, l;
        cin >> n >> k >> l;

        map<int, vi> mp;
        while (n--)
        {
            int a, b;
            cin >> a >> b;

            mp[b].pb(a);
        }

        if (mp.find(l) == mp.end())
            cout << -1 << endl;
        else
        {
            vi arr = mp[l];

            sort(arr.rbegin(), arr.rend());

            int ans = 0;

            int i = 0;
            while (k > 0 && i < arr.size())
            {
                ans += arr[i];
                k--, i++;
            }

            cout << ans << endl;
        }
    }

    return 0;
}