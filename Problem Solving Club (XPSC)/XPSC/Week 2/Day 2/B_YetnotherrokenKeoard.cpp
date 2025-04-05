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
        string str;
        cin >> str;

        int n = str.size();

        vector<int> capital, small;
        vector<bool> rem(n, true);

        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'B')
            {
                if (!capital.empty())
                {
                    rem[capital.back()] = false;
                    capital.pop_back();
                }

                rem[i] = false;
            }
            else if (str[i] == 'b')
            {
                if (!small.empty())
                {
                    rem[small.back()] = false;
                    small.pop_back();
                }

                rem[i] = false;
            }
            else if (str[i] >= 'A' && str[i] <= 'Z')
                capital.pb(i);
            else
                small.pb(i);
        }

        for (int i = 0; i < n; i++)
            if (rem[i])
                cout << str[i];

        cout << endl;
    }

    return 0;
}