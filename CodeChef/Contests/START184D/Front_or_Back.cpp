/*   Author: Arnab Saha  Date: 04/30/2025 [21:58:54]   */
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
const int mod = 998244353;

void arnabsahawrk()
{
    ll n;
    cin >> n;

    vll arr(n);
    rep(i, 0, n) cin >> arr[i];

    if (arr[0] != 0 && arr[n - 1] != 0)
        cout << 0 << endl;
    else
    {
        bool flag = false;
        rep(i, 0, n)
        {
            if (arr[i] != i && arr[i] != (n - 1) - i)
            {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << 0 << endl;
        else
            cout << 2 << endl;
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