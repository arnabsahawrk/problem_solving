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

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        map<int, int> mp;

        rep(i, 0, n)
        {
            int x;
            cin >> x;

            mp[x]++;
        }

        priority_queue<int> pq;
        each(a, mp)
        {
            auto [x, y] = a;

            pq.push(y);
        }

        while (!pq.empty())
        {
            if (pq.size() < 2)
                break;

            int x = pq.top();
            pq.pop();

            int y = pq.top();
            pq.pop();

            x--, y--;

            if (x > 0)
                pq.push(x);
            if (y > 0)
                pq.push(y);
        }

        int ans = 0;
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }

        cout << ans << endl;
    }

    return 0;
}