/*   Author: Arnab Saha  Date: 07/21/2025 [10:49:54]   */
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
    int n;
    cin >> n;

    string s;
    cin >> s;

    if (s.front() != '0')
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                s[i] = '1';
            else
                s[i] = '0';
        }
    }

    if (s.back() != '0')
    {
        int l = 0, r = n - 1;
        while (l <= r)
        {
            if (s[l] == '0')
                l++;
            else if (s[r] == '1')
                r--;
            else
                break;
        }

        if (l <= r)
            out((l + (n - r)));
        else
            out(n);
    }
    else
    {
        int l = 0, r = n - 1;
        while (l <= r)
        {
            if (s[l] == '0')
                l++;
            else if (s[r] == '0')
                r--;
            else
                break;
        }

        if (l <= r)
            out((l + (n - 1 - r)));
        else
            out(n);
    }
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