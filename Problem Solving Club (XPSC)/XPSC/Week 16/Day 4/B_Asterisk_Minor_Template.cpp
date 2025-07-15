/*   Author: Arnab Saha  Date: 07/15/2025 [09:21:21]   */
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
    string a, b;
    cin >> a >> b;

    if (a.front() == b.front())
    {
        out("YES");
        cout << a.front() << '*' << endl;
        return;
    }
    else if (a.back() == b.back())
    {
        out("YES");
        cout << '*' << b.back() << endl;
        return;
    }

    for (int i = 0; i < a.size() - 1; i++)
    {
        for (int j = 0; j < b.size() - 1; j++)
        {
            if (a[i] == b[j] && a[i + 1] == b[j + 1])
            {
                out("YES");
                cout << '*' << a[i] << a[i + 1] << '*' << endl;
                return;
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