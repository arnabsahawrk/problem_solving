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
        map<int, int> mp;
        rep(i, 0, n)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        int m;
        cin >> m;
        while (m--)
        {
            string str;
            cin >> str;

            if (str.size() != n)
                cout << "NO" << endl;
            else
            {
                map<char, vi> pos;
                rep(i, 0, n) pos[str[i]].pb(i);

                bool flag = true;
                each(x, pos)
                {
                    auto [a, b] = x;
                    vi v = b;
                    int val = arr[v[0]];

                    if (v.size() != mp[val])
                    {
                        flag = false;
                        break;
                    }

                    for (int j = 1; j < v.size(); j++)
                    {
                        if (val != arr[v[j]])
                        {
                            flag = false;
                            break;
                        }
                    }
                }
                if (flag)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }

    return 0;
}