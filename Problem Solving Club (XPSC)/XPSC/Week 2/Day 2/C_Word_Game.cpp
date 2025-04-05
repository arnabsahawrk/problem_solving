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

        map<string, int> mp;
        vector<vector<string>> v(3);
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string str;
                cin >> str;

                mp[str]++;
                v[i].pb(str);
            }
        }

        for (int i = 0; i < 3; i++)
        {
            int point = 0;
            for (string str : v[i])
            {
                if (mp[str] == 1)
                    point += 3;
                else if (mp[str] == 2)
                    point++;
            }

            cout << point << " ";
        }

        cout << endl;
    }

    return 0;
}