/*   Author: Arnab Saha  Date: 4/25/2025 [14:05:59]   */
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
    ll n, k;
    cin >> n >> k;

    vll arr(n);
    rep(i, 0, n) cin >> arr[i];

    sort(all(arr));

    ll i = 0, j = n - 1, score = 0;
    while (i < j)
    {
        if (arr[i] + arr[j] == k)
        {
            score++;
            i++;
            j--;
        }
        else if (arr[i] + arr[j] > k)
            j--;
        else
            i++;
    }

    cout << score << endl;
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