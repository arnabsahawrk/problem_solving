/*   Author: Arnab Saha  Date: 28/04/2025 [01:13:13]   */
#include <bits/stdc++.h>
using namespace std;

#define fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define ll long long
#define vll vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fi first
#define se second

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 1e9 + 7;

void arnabsahawrk()
{
    int n;
    cin >> n;

    priority_queue<pll> pq;
    rep(i, 0, n)
    {
        ll x;
        cin >> x;

        pq.push({x, i});
    }

    while (!pq.empty())
    {
        if (pq.top().se % 2 == 0)
        {
            cout << pq.top().fi << endl;
            break;
        }

        pq.pop();
    }
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