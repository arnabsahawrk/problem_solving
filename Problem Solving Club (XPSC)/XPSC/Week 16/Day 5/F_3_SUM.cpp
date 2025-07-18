/*   Author: Arnab Saha  Date: 07/16/2025 [06:25:45]   */
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

    vector<int> arr, freq(10, 0);
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        int y = x.back() - '0';

        freq[y]++;
        if (freq[y] <= 3)
            arr.emplace_back(y);
    }

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (j == i)
                continue;
            for (int k = 0; k < arr.size(); k++)
            {
                if (k == i || k == j)
                    continue;

                if ((arr[i] + arr[j] + arr[k]) % 10 == 3)
                {
                    out("YES");
                    return;
                }
            }
        }
    }

    out("NO");
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