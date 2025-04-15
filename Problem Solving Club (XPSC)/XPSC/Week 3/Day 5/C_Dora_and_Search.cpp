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
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

int main()
{
    fast_io;

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vi arr(n);
        rep(i, 0, n) cin >> arr[i];

        int maxV = *max_element(all(arr));
        int minV = *min_element(all(arr));

        int i = 0, j = n - 1;
        bool flag = true;
        while (i < j)
        {
            if (arr[i] == maxV)
            {
                maxV--;
                i++;
            }
            else if (arr[i] == minV)
            {
                minV++;
                i++;
            }
            else if (arr[j] == maxV)
            {
                maxV--;
                j--;
            }
            else if (arr[j] == minV)
            {
                minV++;
                j--;
            }
            else
            {
                cout << i + 1 << " " << j + 1 << endl;
                flag = false;
                break;
            }
        }

        if (flag)
            cout << -1 << endl;
    }

    return 0;
}