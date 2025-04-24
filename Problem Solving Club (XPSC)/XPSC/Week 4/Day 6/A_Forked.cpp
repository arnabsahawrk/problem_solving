/*   Author: Arnab Saha   Date: 04/24/2025 [14:52:37]   */
#include <bits/stdc++.h>
using namespace std;

/* Hard work beats Talent, when Talent doesn't work hard!! */

#define fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define ll long long
#define vi vector<int>
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
int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

/* Don't plan big - act on smalls, consistent steps. Every day counts. */

void arnabsahawrk()
{
    int a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;

    set<pair<int, int>> kingHits;
    set<pair<int, int>> queenHits;

    rep(i, 0, 4)
    {
        kingHits.insert({xk + dx[i] * a, yk + dy[i] * b});
        kingHits.insert({xk + dx[i] * b, yk + dy[i] * a});

        queenHits.insert({xq + dx[i] * a, yq + dy[i] * b});
        queenHits.insert({xq + dx[i] * b, yq + dy[i] * a});
    }

    int ans = 0;
    each(pos, kingHits)
    {
        if (queenHits.find(pos) != queenHits.end())
            ans++;
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
