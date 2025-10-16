/*   Author: Arnab Saha  Date: 05/01/2025 [22:05:48]   */
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
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 1e9 + 7;

void arnabsahawrk()
{
    priority_queue<pll> pq;
    ll n;
    cin >> n;

    vll arr(n + 1, false);

    rep(i, 0, n)
    {
        ll x;
        cin >> x;

        pq.push({x, i});
    }

    ll ans = 0;
    while (!pq.empty())
    {
        pll d = pq.top();
        pq.pop();

        arr[d.second] = true;

        if (d.second == 0)
        {
            if (!arr[d.second + 1])
                ans++;
        }
        else if (d.second == n - 1)
        {

            if (!arr[d.second - 1])
                ans++;
        }
        else
        {
            if (!arr[d.second - 1] && !arr[d.second + 1])
                ans++;
        }
    }

    cout << ans << endl;
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