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

    int n, m;
    cin >> n >> m;

    vi arr(n);
    rep(i, 0, n) cin >> arr[i];

    vi arr2(n);
    set<int> s;
    rrep(j, n - 1, 0)
    {
        s.insert(arr[j]);
        arr2[j] = s.size();
    }

    while (m--)
    {
        int x;
        cin >> x;

        cout << arr2[x - 1] << endl;
    }

    return 0;
}