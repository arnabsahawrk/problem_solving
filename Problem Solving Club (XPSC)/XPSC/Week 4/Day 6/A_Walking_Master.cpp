/*   Author: Arnab Saha   Date: 04/24/2025 [13:09:59]   */
#include <bits/stdc++.h>
using namespace std;

/* Hard work beats Talent, when Talent doesn't work hard!! */

#define fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define ll long long
#define vi vector<int>
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

/* Don't just plan big - act on smalls, consistent steps. Every day counts. */

void arnabsahawrk()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (d < b)
        cout << -1 << endl;
    else
    {
        int count = 0;

        while (b < d)
        {
            b++;
            a++;
            count++;
        }

        if (c > a)
            cout << -1 << endl;
        else
        {
            while (a > c)
            {
                a--;
                count++;
            }

            cout << count << endl;
        }
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
