/*   Author: Arnab Saha  Date: 05/20/2025 [22:44:42]   */
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

    priority_queue<pll, vector<pll>, greater<pll>> pq;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;

        pq.push({b, a});
    }

    ll count = 1;
    ll a = pq.top().ff, b = pq.top().ss;
    pq.pop();
    while (!pq.empty())
    {
        ll c = pq.top().ff, d = pq.top().ss;
        pq.pop();

        if (a <= d)
        {
            count++;
            a = c;
            b = d;
        }
    }

    out(count);
}

int main()
{
    fast_IO;

    int tc = 1;
    // cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}