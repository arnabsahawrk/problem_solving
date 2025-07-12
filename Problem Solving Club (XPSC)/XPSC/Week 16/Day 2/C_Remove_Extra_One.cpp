#include <bits/stdc++.h>
using namespace std;
int n, k, m, sum, ans = 1, a[100005];
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        if (k > m)
            a[k] = 1, sum = m, m = k;
        else if (k > sum)
            a[m]--, sum = k;
    }
    for (int i = 1; i <= n; i++)
        if (a[i] < a[ans])
            ans = i;
    cout << ans;
}