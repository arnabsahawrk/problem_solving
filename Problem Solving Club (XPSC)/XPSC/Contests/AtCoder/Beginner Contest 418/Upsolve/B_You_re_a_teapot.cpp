/*   Author: Arnab Saha  Date: 08/09/2025 [18:12:00]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define checkmate return 0;

using ll = long long;
using ld = long double;

#define out(x) cout << fixed << setprecision(17) << x << endl
#define endl '\n'

const int mod = 1e9 + 7;

void arnabsahawrk()
{
    string s;
    cin >> s;

    ld ans = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != 't')
            continue;

        for (int j = i + 2; j < n; j++)
        {
            if (s[j] != 't')
                continue;

            int x = 0;
            for (int xi = i; xi <= j; xi++)
                if (s[xi] == 't')
                    x++;

            int len = (j - i) + 1;

            ld fill = ld(x - 2) / ld(len - 2);

            ans = max(fill, ans);
        }
    }

    out(ans);
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc = 1;
    // cin >> tc;
    while (tc--)
        arnabsahawrk();

    checkmate;
}