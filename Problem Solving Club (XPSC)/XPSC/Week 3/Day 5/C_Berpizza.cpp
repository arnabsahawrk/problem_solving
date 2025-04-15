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

    int q, customNo = 1;
    cin >> q;

    set<pii> m;
    multiset<pii> p;
    vi result;

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int money;
            cin >> money;

            m.insert({customNo, money});
            p.insert({money, -customNo});
            customNo++;
        }
        else if (type == 2)
        {
            result.pb(m.begin()->first);

            p.erase({m.begin()->second, -m.begin()->first});
            m.erase(m.begin());
        }
        else
        {
            result.pb(-p.rbegin()->second);

            m.erase({-p.rbegin()->second, p.rbegin()->first});
            p.erase(--p.end());
        }
    }

    each(x, result) cout << x << " ";
    cout << endl;

    return 0;
}