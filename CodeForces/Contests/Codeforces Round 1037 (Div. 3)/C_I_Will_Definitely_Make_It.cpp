/*   Author: Arnab Saha  Date: 07/17/2025 [21:23:48]   */
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
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int curr = v[k - 1];

    /* sort(all(v));
     int mx = *max_element(all(v));

     int x = 0;
     auto it = upper_bound(all(v), curr);
     for (int i = 1; i <= mx; i++)
     {

         if (it != v.end() && x == (v[it - v.begin()] - curr))
         {
             x = 0;
             curr = v[it - v.begin()];
             it = upper_bound(all(v), curr);
         }
         else if (curr == mx)
             break;

         if (curr < i)
         {
             out("NO");
             return;
         }

         x++;
     }

     out("YES");*/

    sort(all(v));
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == curr)
        {
            j = i;
            break;
        }
    }

    vector<int> v2(n, 0);
    v2[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        v2[i] = v[i] - v[i - 1];
    }

    for (int i = j; i < n; i++)
    {
        if (v2[i] > curr)
        {
            out("NO");
            return;
        }
    }

    out("YES");
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