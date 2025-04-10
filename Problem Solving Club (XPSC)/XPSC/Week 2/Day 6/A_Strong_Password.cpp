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
        string s;
        cin >> s;

        bool IsInserted = false;
        int sz = s.size();
        for (int i = 0; i < sz - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                if (s[i] == 'a')
                    s.insert(i + 1, "b");
                else
                    s.insert(i + 1, "a");

                IsInserted = true;
                break;
            }
        }

        if (!IsInserted)
        {
            if (s.back() == 'a')
                s.pb('b');
            else
                s.pb('a');
        }

        cout << s << endl;
    }

    return 0;
}