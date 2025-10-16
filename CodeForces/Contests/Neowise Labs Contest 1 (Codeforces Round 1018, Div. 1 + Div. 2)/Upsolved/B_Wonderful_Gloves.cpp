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
    ll n, k;
    cin >> n >> k;

    vll l(n), r(n);
    rep(i, 0, n) cin >> l[i];
    rep(i, 0, n) cin >> r[i];

    priority_queue<ll> pq;
    ll m = 0;
    rep(i, 0, n)
    {
        m += max(l[i], r[i]);
        pq.push(min(l[i], r[i]));
    }

    ll ans = m;
    while (--k)
    {
        ans += pq.top();
        pq.pop();
    }

    cout << ans + 1 << endl;
}

int main()
{
    fast_io;

    int tc;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}