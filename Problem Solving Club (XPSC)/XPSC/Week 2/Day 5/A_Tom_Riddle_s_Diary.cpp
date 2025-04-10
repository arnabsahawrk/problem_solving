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

    map<string, int> mp;
    while (tc--)
    {
        string name;
        cin >> name;

        mp[name]++;

        if (mp[name] > 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}