/*   Author: Arnab Saha  Date: 07/16/2025 [22:19:26]   */
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

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.rbegin(), v.rend());

    for (int k = 1; k <= 2 * n; k++)
    {
        cout << k << "->";
        int sum = 0, x = 0, ik = k;
        for (int i = 0; i < n; i++)
        {
            if (ik > 0)
            {
                if (ik >= 2 && v[i] < x)
                {
                    ik -= 2;
                    sum += v[i] + x;
                }
                else
                {
                    ik -= 1;
                    sum += v[i];
                }

                cout << ik << " " << sum << " ";

                x++;
            }
        }

        // cout << sum << " ";
        cout << endl;
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