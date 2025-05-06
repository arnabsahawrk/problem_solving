/*   Author: Arnab Saha  Date: 05/06/2025 [18:20:22]   */
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
    ll n;
    cin >> n;

    ll l = 1, r = n * n;
    vector<vll> arr(n, vll(n));
    bool f = false;
    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
            if (f)
                arr[i][j] = l++;
            else
                arr[i][j] = r--;

            if (!f)
                f = true;
            else
                f = false;
        }

        if (i & 1)
            reverse(arr[i].begin(), arr[i].end());
    }

    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
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