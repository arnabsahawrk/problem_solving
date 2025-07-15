/*   Author: Arnab Saha  Date: 07/15/2025 [10:20:33]   */
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

    vector<int> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];

    /* int aInv = 0, bInv = 0;
     pbds aP, bP;
     for (int i = n; i >= 1; i--)
     {
         aInv += aP.order_of_key(a[i]);
         bInv += bP.order_of_key(b[i]);

         aP.insert(a[i]);
         bP.insert(b[i]);
     }

     if (aInv != 0 && bInv != 0)
     {
         for (int i = 1; i <= n; i++)
         {
             while (a[i] != i)
             {
                 swap(b[a[i]], b[i]);
                 swap(a[a[i]], a[i]);
             }
         }
     }*/

    for (int i = 1; i <= n; i++)
    {
        while (a[i] != i)
        {
            swap(b[a[i]], b[i]);
            swap(a[a[i]], a[i]);
        }
    }

    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
    for (int i = 1; i <= n; i++)
        cout << b[i] << " ";
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