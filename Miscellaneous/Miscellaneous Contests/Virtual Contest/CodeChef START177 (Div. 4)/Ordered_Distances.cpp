/*   Author: Arnab Saha  Date: 05/10/2025 [18:54:40]   */
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

    vll arr(n), pArr(n);
    rep(i, 0, n) cin >> arr[i];
    rep(i, 0, n) cin >> pArr[i];

    priority_queue<pll, vector<pll>, greater<pll>> pq;
    ll p = pArr[0];
    rep(i, 0, n)
        pq.push({abs(arr[i] - p), arr[i]});

    rep(i, 0, n)
    {
        if (pq.top().second != pArr[i])
        {
            out(-1);
            return;
        }

        pq.pop();
    }

    rep(i, 0, n)
    {
        if (arr[i] == p)
        {
            out(i + 1);
            return;
        }
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