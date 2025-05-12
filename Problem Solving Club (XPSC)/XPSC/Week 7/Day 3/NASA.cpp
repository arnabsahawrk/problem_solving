/*   Author: Arnab Saha  Date: 05/12/2025 [18:43:02]   */
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

ll maxi = (1LL << 15);
vll palindromes;
void getPalindromes()
{
    rep(i, 0, maxi)
    {
        string s = to_string(i);
        string t = s;
        reverse(s.begin(), s.end());
        if (s == t)
            palindromes.eb(i);
    }
}

void arnabsahawrk()
{
    ll n;
    cin >> n;

    vll arr(n), freq(maxi + 1, 0);
    rep(i, 0, n) cin >> arr[i], freq[arr[i]]++;


    ll count = n;
    rep(i, 0, n)
        rep(j, 0, sz(palindromes))
            count += freq[arr[i] ^ palindromes[j]];

    cout << (count/2) << endl;
}

int main()
{
    fast_IO;

    getPalindromes();

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}