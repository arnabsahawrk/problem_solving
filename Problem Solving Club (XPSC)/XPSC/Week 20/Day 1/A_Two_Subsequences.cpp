/*   Author: Arnab Saha  Date: 09/03/2025 [20:01:20]   */
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
    string s;
    cin >> s;

    char c = 'z';
    int n = s.size();
    for (int i = 0; i < n; i++)
        c = min(c, s[i]);

    string a, b;
    bool f = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == c && f)
            a += c, f = false;
        else
            b += s[i];
    }

    cout << a << " " << b << endl;
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