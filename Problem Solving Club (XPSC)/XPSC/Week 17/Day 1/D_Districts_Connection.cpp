/*   Author: Arnab Saha  Date: 07/19/2025 [09:45:37]   */
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
    bool f = true;
    int diff = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (v[0] != v[i])
        {
            f = false;
            diff = i + 1;
        }
    }

    if (f)
    {
        out("NO");
        return;
    }

    out("YES");
    for (int i = 1; i < n; i++)
    {
        if (v[0] != v[i])
            cout << 1 << " " << i + 1 << endl;
        else
            cout << diff << " " << i + 1 << endl;
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