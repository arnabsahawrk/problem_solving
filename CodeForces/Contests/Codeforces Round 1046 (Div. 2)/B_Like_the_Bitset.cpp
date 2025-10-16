/*   Author: Arnab Saha  Date: 08/28/2025 [20:53:38]   */
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

void arnabsahawrk()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;
    s = " " + s;

    int r = 0;
    bool b = false;
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == '1')
        {
            r++;
            if (r >= k)
            {
                b = true;
                break;
            }
        }
        else
            r = 0;
    }

    if (b)
    {
        out("NO");
        return;
    }

    int w = max(0, n - k + 1);
    if (w == 0)
    {
        out("YES");
        for (int i = 1; i <= n; i++)
            cout << i << " ";

        cout << endl;
        return;
    }

    struct z
    {
        int l, r, p;
    };
    vector<z> zeros;
    for (int pos = 1; pos <= n; pos++)
        if (s[pos] == '0')
        {
            int l = max(1, pos - k + 1);
            int r = min(n - k + 1, pos);
            if (l <= r)
                zeros.push_back({l, r, pos});
        }

    vector<int> c;
    int cur = 1;
    sort(zeros.begin(), zeros.end(), [](const z &a, const z &b)
         {
            if (a.l != b.l) return a.l < b.l;
            return a.r > b.r; });

    int idx = 0;
    while (cur <= w)
    {
        int x = -1, y = -1;
        while (idx < zeros.size() && zeros[idx].l <= cur)
        {
            if (zeros[idx].r > x)
            {
                x = zeros[idx].r;
                y = zeros[idx].p;
            }
            idx++;
        }
        if (x < cur)
        {
            b = true;
            break;
        }
        c.push_back(y);
        cur = x + 1;
    }
    if (b)
    {
        out("NO");
        return;
    }

    vector<int> arr(n + 1, 0);
    int m = c.size();
    int val = n;
    for (int pos : c)
    {
        arr[pos] = val--;
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
            arr[i] = val--;
    }

    out("YES");
    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";

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