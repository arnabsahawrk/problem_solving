/*   Author: Arnab Saha  Date: 28/04/2025 [12:44:10]   */
#include <bits/stdc++.h>
using namespace std;

#define fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define ll long long
#define vll vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fi first
#define se second

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 1e9 + 7;

void arnabsahawrk()
{
    ll n;
    cin >> n;

    vll a(n);
    ll sum = 0;
    rep(i, 0, n)
    {
        cin >> a[i];
        sum += a[i];
        a[i] = sum;
    }

    string s;
    cin >> s;

    sum = 0;
    ll i = 0, j = n - 1;
    while (i < j)
    {
        if (s[i] != 'L')
            i++;
        else if (s[j] != 'R')
            j--;
        else
        {
            sum += a[j];

            if (i != 0)
                sum -= a[i - 1];

            i++, j--;
        }
    }

    cout << sum << endl;
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