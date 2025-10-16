/*   Author: Arnab Saha  Date: 08/12/2025 [19:30:52]   */
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

    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum % 2 == 0)
    {
        out(0);
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 2)
        {
            out(1);
            return;
        }
    }

    out(-1);
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