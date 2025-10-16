/*   Author: Arnab Saha  Date: 04/29/2025 [22:37:32]   */
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

    vll a(n);
    rep(i, 0, n) cin >> a[i];

    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        if (r - l == 2 || r - l == 4)
        {
            if (r - l == 2)
            {
                if (a[l] != a[r - 1])
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl;
            }
            else
            {
                ll one = 0, two = 0, three = 0;
                rep(i, l, r)
                {
                    if (a[i] == 1)
                        one++;
                    else if (a[i] == 2)
                        two++;
                    else
                        three++;
                }

                if ((one == 2 && two == 1 && three == 1) || (one == 1 && two == 2 && three == 1) || (one == 1 && two == 1 && three == 2))
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl;
            }
        }
        else
            cout << "No" << endl;
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