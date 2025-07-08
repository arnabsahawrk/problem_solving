#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int l = 1, r = n;
    vector<int> ans(n);
    for (int i = 0; i < k; i++)
    {
        for (int j = i; j < n; j += k)
        {
            if (i % 2 == 0)
            {
                ans[j] = l;
                l++;
            }
            else
            {
                ans[j] = r;
                r--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}