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

void solve()
{
    int n, m;
    cin >> n >> m;

    int arr[n], arr2[m];
    rep(i, 0, n) cin >> arr[i];
    rep(i, 0, m) cin >> arr2[i];

    deque<int> dq;
    int i = m - 1, j = n - 1;
    while (i >= 0)
    {
        if (arr2[i] > arr[j])
        {
            dq.push_front(j + 1);
            i--;
        }
        else
        {
            if (j != 0)
                j--;
            else
            {
                dq.push_front(j);
                i--;
            }
        }
    }

    while (!dq.empty())
    {
        cout << dq.front() << " ";
        dq.pop_front();
    }
}

int main()
{
    fast_io;

    solve();

    return 0;
}