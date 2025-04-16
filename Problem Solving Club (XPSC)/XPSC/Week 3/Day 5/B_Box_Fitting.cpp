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
    int n, w;
    cin >> n >> w;

    multiset<int> ml;
    rep(i, 0, n)
    {
        int x;
        cin >> x;

        ml.insert(x);
    }

    int h = 1, left = w;
    while (!ml.empty())
    {
        auto it = ml.upper_bound(left);

        if (it == ml.begin())
        {
            left = w;
            h++;
        }
        else
        {
            it--;
            int val = *it;
            left -= val;
            ml.erase(it);
        }
    }

    cout << h << endl;
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