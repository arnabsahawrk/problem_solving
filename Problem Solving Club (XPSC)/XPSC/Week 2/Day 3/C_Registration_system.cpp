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
        string username;
        cin >> username;

        mp[username]++;

        if (mp[username] == 1)
            cout << "OK" << endl;
        else
            cout << username << mp[username] - 1 << endl;
    }

    return 0;
}