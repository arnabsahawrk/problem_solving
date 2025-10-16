/*   Author: Arnab Saha  Date: 07/30/2025 [23:56:35]   */
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

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    string ans;
    int f = 1;
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (i == j)
            ans += 'L';
        else if (f)
        {
            if (arr[i] > arr[j])
                ans += "RL";
            else
                ans += "LR";
        }
        else
        {
            if (arr[i] > arr[j])
                ans += "LR";
            else
                ans += "RL";
        }

        i++, j--;
        f ^= 1;
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