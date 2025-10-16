/*   Author: Arnab Saha  Date: 05/12/2025 [20:29:07]   */
#include <bits/stdc++.h>
using namespace std;

#define fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define ll long long
#define ld long double
#define vll vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define eb emplace_back
#define sz(x) x.size()
#define all(v) (v).begin(), (v).end()
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)
#define endl '\n'
#define out(x) cout << x << endl

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 1e9 + 7;

void arnabsahawrk()
{
    ll n;
    cin >> n;

    vll arr(n);
    ll pSum = 0;
    rep(i, 0, n) cin >> arr[i], pSum += arr[i];

    bool f = false, b = false;
    ll sum = 0, ans = 0;
    rrep(i, n - 1, 0)
    {
        if (arr[i] > 0)
        {
            f = true;
            sum += arr[i];
        }

        if (f && arr[i] == 0 && i != 0)
        {
            ll zC = 1;
            while (i >= 0)
            {
                if (arr[i] == 0)
                    zC++;
                else if (zC > 0 && arr[i] == sum)
                {
                    ans += 1;
                    if (zC > 1)
                        ans += zC;

                    // cout << ans << "->";

                    zC = 0;
                }
                else if (arr[i] > sum + 1)
                {
                    out(0);
                    return;
                }
                else if (zC > 0)
                {

                    ans += 1;
                    if (zC > 1)
                        ans += zC;

                    // cout << ans << "->";

                    zC = 0;
                }

                sum += arr[i];
                i--;
            }
        }
    }
    // cout << endl;

    // cout << pSum << " " << sum << " " << ans << "->";
    if (pSum == sum)
        out(ans);
    else
        out(0);
}

int main()
{
    fast_IO;

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}