/*   Author: Arnab Saha  Date: 08/26/2025 [20:46:19]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define checkmate return 0;

using ll = long long;
using ld = long double;

#define out(x) cout << x << endl
#define endl '\n'

const int mod = 1e9 + 7;

ll pw(ll a, ll e, ll m)
{
    ll r = 1 % m;
    a %= m;

    while (e)
    {
        if (e & 1)
            r = (r * a) % m;
        a = (a * a) % m;
        e >>= 1;
    }
    return r;
}

bool isPrime(int x)
{
    if (x < 2)
        return false;

    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }

    return true;
}

void arnabsahawrk()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int p = -1;
    for (int i = 2; i <= 1000; i++)
    {
        if (!isPrime(i))
            continue;
        if (k % i != 0)
        {
            p = i;
            break;
        }
    }

    if (p == -1)
    {
        for (int x : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29})
            if (k % x != 0)
            {
                p = x;
                break;
            }
    }

    if (p == -1)
    {
        for (int i = 0; i < n; i++)
        {
            if (i)
                cout << ' ';
            cout << a[i];
        }

        cout << endl;
        return;
    }

    ll invK = pw((k % p + p) % p, p - 2, p);
    for (int i = 0; i < n; i++)
    {
        ll ai = (a[i] % p + p) % p;
        ll need = (p - ai) % p;
        ll r = (need * invK) % p;
        a[i] += r * k;
    }

    for (int i = 0; i < n; i++)
    {
        if (i)
            cout << ' ';
        cout << a[i];
    }
    cout << endl;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    checkmate;
}