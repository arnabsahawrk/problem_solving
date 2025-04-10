#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'

int main()
{
    fast_io;

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        string line;
        cin >> line;

        vll dispatch;
        ll minChange = 0;
        ll total = 0;

        for (int i = 0; i < n; i++)
        {
            int L = i;
            int R = n - i - 1;

            if (L > R)
            {
                if (line[i] != 'L')
                {
                    minChange++;
                    dispatch.pb(L - R);
                    total += L;
                }
                else
                    total += L;
            }
            else
            {
                if (line[i] != 'R')
                {
                    minChange++;
                    dispatch.pb(R - L);
                    total += R;
                }
                else
                    total += R;
            }
        }

        vll ans(n + 1);

        for (int i = minChange; i <= n; i++)
            ans[i] = total;

        sort(dispatch.rbegin(), dispatch.rend());

        for (int i = minChange - 1; i >= 1; i--)
        {
            total -= dispatch.back();
            dispatch.pop_back();
            ans[i] = total;
        }

        for (int i = 1; i <= n; i++)
            cout << ans[i] << " ";

        cout << endl;
    }

    return 0;
}