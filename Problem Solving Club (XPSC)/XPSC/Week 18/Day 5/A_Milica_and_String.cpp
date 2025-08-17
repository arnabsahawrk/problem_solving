/*   Author: Arnab Saha  Date: 08/17/2025 [18:49:09]   */
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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int A = 0, B = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            A++;
        else
            B++;
    }

    if (k == B)
        out(0);
    else if (k == 0 && B != 0)
    {
        out(1);
        cout << n << " " << 'A' << endl;
    }
    else if (k == n && B != n)
    {
        out(1);
        cout << n << " " << 'B' << endl;
    }
    else if (k > B)
    {
        for (int i = 0; i < n; i++)
        {

            if (s[i] == 'A')
                B++;

            if (B == k)
            {
                out(1);
                cout << i + 1 << " " << 'B' << endl;
                break;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
                B--;

            if (B == k)
            {
                out(1);
                cout << i + 1 << " " << 'A' << endl;
                break;
            }
        }
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