/*   Author: Arnab Saha  Date: 05/06/2025 [23:35:05]   */
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
    ll n, q;
    cin >> n >> q;

    vll arr(n);
    ll sum = 0;

    multiset<ll> ml;
    rep(i, 0, n)
    {
        cin >> arr[i];
        sum += arr[i];
        ml.insert(arr[i]);
    }

    map<ll, pll> mp;
    rep(i, 0, n)
        rep(j, 0, n) if (i != j)
            mp[sum * 2 - (arr[i] + arr[j])] = {arr[i], arr[j]};

    while (q--)
    {
        ll x;
        cin >> x;

        if (x < sum || x > 2 * sum)
            cout << -1 << endl;
        else if (sum == x && n == 2)
        {
            rep(i, 0, n) cout << arr[i] << " ";

            cout << endl;
        }
        else if (mp.find(x) == mp.end())
            cout << -1 << endl;
        else
        {
            ll a = mp[x].first;
            ll c = mp[x].second;

            auto it = ml.find(a);
            if (it != ml.end())
                ml.erase(it);

            auto jt = ml.find(c);
            if (jt != ml.end())
                ml.erase(jt);

            cout << a << " ";
            each(b, ml) cout << b << " ";
            cout << c << endl;

            ml.insert(a);
            ml.insert(c);
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