/*   Author: Arnab Saha  Date: 05/29/2025 [00:55:58]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
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

int main()
{
    fast_IO;

    auto arnabsahawrk = [&]()
    {
        ll n, k;
        cin >> n >> k;

        vll a(n), b(n);
        each(i, a) cin >> i;
        each(j, b) cin >> j;

        vll order(n);
        iota(all(order), 0);

        sort(all(order), [&a](ll x, ll y)
             { return a[x] < a[y]; });

        priority_queue<ll, vll, greater<ll>> pq;
        ll sm = 0;
        vll ans(n);
        each(i, order)
        {
            ans[i] = sm;

            pq.push(b[i]);
            sm += b[i];

            if (pq.size() > k)
            {
                sm -= pq.top();
                pq.pop();
            }
        }

        each(x, ans) cout << x << " ";
        cout << endl;
    };

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}