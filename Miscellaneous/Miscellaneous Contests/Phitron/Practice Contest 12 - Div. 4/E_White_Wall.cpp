/*   Author: Arnab Saha  Date: 07/28/2025 [21:24:15]   */
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
    int n;
    cin >> n;

    string s;
    cin >> s;

    int l = 0, r = 0, ans = 0;
    map<char, int> mp;
    while (r < n)
    {
        mp[s[r]]++;

        if ((r - l + 1) % 3 == 0)
        {
            if (mp.size() == 2)
            {
                ans++;

                mp['R'] = 1;
                mp['B'] = 1;
                mp['G'] = 1;
            }
            else if (mp.size() == 1)
            {
                ans += 2;

                mp['R'] = 1;
                mp['B'] = 1;
                mp['G'] = 1;
            }

            mp.erase(s[l]);
            l++;
        }

        r++;
    }

    out(ans);
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