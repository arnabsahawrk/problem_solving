/*   Author: Arnab Saha  Date: 05/06/2025 [20:47:13]   */
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
    rep(i, 0, n) cin >> arr[i];

    while (q--)
    {
        ll a;
        cin >> a;
        if (n == 2)
        {
            if (a == arr[0] + arr[1])
                cout << arr[0] << " " << arr[1] << endl;
            else
                cout << -1 << endl;
        }
        else
        {
            ll x = 0;
            bool f = true;
            ll nxt = 1;
            vll ar(n);
            rep(i, 0, n) ar[i] = arr[i];
            rep(i, 0, n)
            {
                rep(j, 1, n)
                {
                    x += arr[j - 1] + arr[j];
                }

                // cout << x << "->" << endl;

                if (x == a)
                {
                    f = false;
                    rep(i, 0, n)
                    {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                    break;
                }
                else
                {
                    rotate(arr.begin(), arr.begin() + nxt, arr.end());
                    nxt++;
                    x = 0;
                }
            }

            if (f)
                cout << -1 << endl;
            else
                rep(i, 0, n) arr[i] = ar[i];

            // rep(i, 0, n) cout << arr[i] << "->";

            // cout << endl;
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