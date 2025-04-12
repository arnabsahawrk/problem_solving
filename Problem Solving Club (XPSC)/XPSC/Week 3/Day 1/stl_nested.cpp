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

    vector<vll> v;
    vector<set<int>> vs;
    vector<multiset<int>> vml;
    vector<priority_queue<int>> vpq;

    map<vector<int>, int> mpv;
    map<vector<pair<int, int>>, set<int>> mpv;

    vi vec;
    vec.pb(1);
    vec.pb(3);
    vec.pb(6);
    vec.pb(9);

    mpv[vec]++;
    mpv[vec]++;

    each(x, mpv)
    {
        auto [a, b] = x;

        cout << b << "->";

        each(v, a) cout << v << " ";

        cout << endl;
    }

    return 0;
}