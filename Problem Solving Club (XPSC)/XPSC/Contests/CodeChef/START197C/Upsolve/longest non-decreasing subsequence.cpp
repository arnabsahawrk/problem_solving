/*   Author: Arnab Saha  Date: 08/03/2025 [22:56:24]   */
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

    int forZero = 0, forOne = 0;
    for (int i = 0; i < n; i++)
    {
        int zero = 0, one = 0;
        if (s[i] == '0')
        {
            while (i < n && s[i] == '0')
                zero++, i++;

            forZero = max(forZero, (zero + forZero));
            i--;
        }
        else
        {
            while (i < n && s[i] == '1')
                one++, i++;

            forOne = max(forOne, (one + forZero));
            i--;
        }
    }

    out(max(forZero, forOne));
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