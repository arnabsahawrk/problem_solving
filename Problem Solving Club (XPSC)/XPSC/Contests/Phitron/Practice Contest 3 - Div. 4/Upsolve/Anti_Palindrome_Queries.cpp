/*   Author: Arnab Saha  Date: 04/29/2025 [23:57:35]   */
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
#define fo(i, n) for (int i = 0; i < n; ++i)
#define each(x, a) for (auto &x : a)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fst first
#define snd second

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 1e9 + 7;

void arnabsahawrk()
{
    ll n, q;
    cin >> n >> q;

    ll mx = 200005;
    vll arr(mx), prefixOne(mx), prefixTwo(mx), prefixThree(mx);

    rep(i, 1, n + 1)
    {
        cin >> arr[i];

        prefixOne[i] = prefixOne[i - 1] + (arr[i] == 1);
        prefixTwo[i] = prefixTwo[i - 1] + (arr[i] == 2);
        prefixThree[i] = prefixThree[i - 1] + (arr[i] == 3);
    }

    while (q--)
    {
        ll l, r;
        cin >> l >> r;

        ll len = r - l + 1;

        if (len & 1)
            cout << "No" << endl;
        else
        {
            ll cnt1 = prefixOne[r] - prefixOne[l - 1];
            ll cnt2 = prefixTwo[r] - prefixTwo[l - 1];
            ll cnt3 = prefixThree[r] - prefixThree[l - 1];

            ll half = len / 2;

            if (cnt1 > half || cnt2 > half || cnt3 > half)
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
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