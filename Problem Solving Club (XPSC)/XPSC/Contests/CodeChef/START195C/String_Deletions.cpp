/*   Author: Arnab Saha  Date: 07/16/2025 [20:44:36]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define checkmate return 0;

using ll = long long;
using ld = long double;

#define all(x) (x).begin(), (x).end()
#define out(x) cout << x << endl
#define endl '\n'

const int mod = 1e9 + 7;

void arnabsahawrk()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> v(n, 0);
    int sz = n;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[0] == s[i])
        {
            sz = i + 1;
            break;
        }
    }

    bool f = true;
    int first = -1, last = -1;
    for (int i = 0; i < sz; i++)
    {
        if (s[i] == '0' && f)
        {
            first = i;
            f = false;
        }
        else if (s[i] == '0')
            last = i;
    }

    if (first != -1 && last != -1)
    {
        for (int i = first; i < last; i++)
        {
            if (s[i] == '1')
                v[i] = 1;
        }
    }

    f = true;
    first = -1, last = -1;
    for (int i = 0; i < sz; i++)
    {
        if (s[i] == '1' && f)
        {
            first = i;
            f = false;
        }
        else if (s[i] == '1')
            last = i;
    }

    if (first != -1 && last != -1)
    {
        for (int i = first; i < last; i++)
        {
            if (s[i] == '0')
                v[i] = 1;
        }
    }

    int ans1 = 0;
    for (int i = 0; i < n; i++)
    {
        ans1 += v[i];
    }

    vector<int> v2(n, 0);
    reverse(all(s));
    sz = n;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[0] == s[i])
        {
            sz = i + 1;
            break;
        }
    }

    f = true;
    first = -1, last = -1;
    for (int i = 0; i < sz; i++)
    {
        if (s[i] == '0' && f)
        {
            first = i;
            f = false;
        }
        else if (s[i] == '0')
            last = i;
    }

    if (first != -1 && last != -1)
    {
        for (int i = first; i < last; i++)
        {
            if (s[i] == '1')
                v2[i] = 1;
        }
    }

    f = true;
    first = -1, last = -1;
    for (int i = 0; i < sz; i++)
    {
        if (s[i] == '1' && f)
        {
            first = i;
            f = false;
        }
        else if (s[i] == '1')
            last = i;
    }

    if (first != -1 && last != -1)
    {
        for (int i = first; i < last; i++)
        {
            if (s[i] == '0')
                v2[i] = 1;
        }
    }

    int ans2 = 0;
    for (int i = 0; i < n; i++)
    {
        ans2 += v2[i];
    }

    out(min((n - ans1), (n - ans2)));
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