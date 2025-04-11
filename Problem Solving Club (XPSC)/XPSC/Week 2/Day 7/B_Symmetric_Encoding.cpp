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

        string s;
        cin >> s;

        set<char> r;
        for (int i = 0; i < n; i++)
            r.insert(s[i]);

        map<char, char> mp;
        auto it = r.rbegin();
        for (char x : r)
        {
            mp[x] = *it;
            it++;
        }

        for (char x : s)
            cout << mp[x];

        cout << endl;
    }

    return 0;
}