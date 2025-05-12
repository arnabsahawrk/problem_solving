/*   Author: Arnab Saha  Date: 05/12/2025 [21:56:45]   */
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

void arnabsahawrk()
{
    ll n;
    cin >> n;

    vll v(n);
    rep(i, 0, n) cin >> v[i];

    int s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++)
    {
        s2 += v[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        s1 += v[i];
        s2 -= v[i];
        if (v[i] == 0 && (s1 == s2 + 1 || s2 == s1 + 1))
        {
            count++;
        }
        else if (v[i] == 0 && s1 == s2)
        {
            count += 2;
        }
    }
    cout << count << endl;

    // ll n;
    // cin >> n;

    // vll arr;
    // ll sum = 0;
    // rep(i, 0, n)
    // {
    //     ll x;
    //     cin >> x;

    //     sum += x;

    //     if (x == 0 && (sz(arr) || sum != 0))
    //     {
    //         if (sum != 0)
    //             arr.eb(sum);
    //         arr.eb(x);

    //         sum = 0;
    //     }
    // }

    // if (sum != 0)
    //     arr.eb(sum);

    // while (sz(arr) && arr.back() == 0)
    //     arr.pop_back();

    // ll z = 0, ans = 0;
    // sum = 0;
    // rep(i, 0, sz(arr))
    // {
    //     if (arr[i] == 0)
    //         z++;
    //     else if (z > 0)
    //     {
    //         if (sum == arr[i])
    //             ans += (2 * z), sum = 0;
    //         else if (abs(sum - arr[i]) == 1)
    //             ans += (1 * z), sum = 0;
    //         else
    //             sum += arr[i];

    //         z = 0;
    //     }
    //     else
    //         sum += arr[i];
    // }

    // if (sum)
    //     out(0);
    // else
    //     out(ans);
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