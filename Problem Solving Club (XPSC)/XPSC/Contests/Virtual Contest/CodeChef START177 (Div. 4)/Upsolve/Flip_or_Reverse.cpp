/*   Author: Arnab Saha  Date: 05/10/2025 [19:55:04]   */
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

    string A, B;
    cin >> A >> B;

    vector<tuple<int, int, int>> ans;
    ll i = 0;
    while (i < n)
    {
        if (A[i] == B[i])
        {
            i++;
            continue;
        }

        if (i + 1 == n || A[i + 1] == B[i + 1])
        {
            ans.eb(make_tuple(1, i + 1, i + 1));
            i++;
            continue;
        }

        if (A[i] == A[i + 1])
        {
            ans.eb(make_tuple(1, i + 1, i + 2));
            i += 2;
        }
        else
        {
            ans.eb(make_tuple(2, i + 1, i + 2));
            i += 2;
        }
    }

    cout << sz(ans) << endl;
    each(x, ans) cout << get<0>(x) << " " << get<1>(x) << " " << get<2>(x) << endl;
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