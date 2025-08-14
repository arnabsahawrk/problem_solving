/*   Author: Arnab Saha  Date: 08/13/2025 [21:14:51]   */
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

const int N = 2e5 + 7;
int freq[N] = {0};

void arnabsahawrk()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        freq[i] = 0;
    }

    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int mx = 0, c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (freq[i] > mx)
        {
            mx = freq[i];
            c = i;
        }
    }

    int ans = 0;
    int fences[n + 1];
    if (c != 1)
    {
        for (int i = 1; i <= n; i++)
        {
            fences[i] = c;
        }

        ans++;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fences[i] = 1;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (fences[i] != arr[i])
            ans++;
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