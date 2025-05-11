/*   Author: Arnab Saha  Date: 05/11/2025 [12:39:59]   */
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

bool check_kth_bit_on_or_off(ll n, ll k)
{
    return ((n >> k) & 1);
}

void print_on_and_off_bits(ll n)
{
    rrep(i, 7, 0)
    {
        cout << check_kth_bit_on_or_off(n, i) << " ";
    }

    cout << endl;
}

ll turn_on_kth_bit(ll n, ll k)
{
    return (n | (1 << k));
}

ll turn_off_kth_bit(ll n, ll k)
{
    return (n & (~(1 << k)));
}

ll toggle_kth_bit(ll n, ll k)
{
    return (n ^ (1 << k));
}

void arnabsahawrk()
{
    ll n, k;
    cin >> n >> k;

    out(check_kth_bit_on_or_off(n, k));

    print_on_and_off_bits(45);

    out(turn_on_kth_bit(n, k));

    out(turn_off_kth_bit(n, k - 1));

    out(toggle_kth_bit(n, k - 2));
}

int main()
{
    fast_IO;

    int tc = 1;
    // cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}