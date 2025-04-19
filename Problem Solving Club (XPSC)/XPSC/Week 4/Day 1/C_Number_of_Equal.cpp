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

void solve()
{
    int n, m;
    cin >> n >> m;

    vll arr(n);
    vll arr2(m);

    rep(i, 0, n) cin >> arr[i];
    rep(j, 0, m) cin >> arr2[j];

    ll i = 0, j = 0, ans = 0;
    while (i < n && j < m)
    {
        ll curr = arr[i], cnt1 = 0, cnt2 = 0;

        while (i < n && curr == arr[i])
        {
            cnt1++;
            i++;
        }

        while (j < m && (curr == arr2[j] || curr > arr2[j]))
        {
            if (curr == arr2[j])
                cnt2++;

            j++;
        }

        ans += (cnt1 * cnt2);
    }

    cout << ans << endl;
}

int main()
{
    fast_io;

    solve();

    return 0;
}