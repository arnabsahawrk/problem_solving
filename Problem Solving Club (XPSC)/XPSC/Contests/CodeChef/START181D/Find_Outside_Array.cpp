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

        vi v(n), v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            v2[i] = v[i];
        }

        sort(v2.begin(), v2.end());

        if ((v2[0] == 0 && v2[n - 1] == 0) || (v2[0] < 0 && v2[n - 1] == 0))
            cout << -1 << endl;
        else if (n == 1)
        {
            cout << v[0] << " " << v[0] << endl;
        }
        else
        {
            if (v2[0] < 0 && v2[1] < 0)
            {
                for (int i = 0; i < n; i++)
                {
                    if (v2[0] == v[i])
                    {
                        cout << v2[0] << " " << v2[1] << endl;
                        break;
                    }
                    else if (v2[1] == v[i])
                    {
                        cout << v2[1] << " " << v2[0] << endl;
                        break;
                    }
                }
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    if (v2[n - 1] == v[i])
                    {
                        cout << v2[n - 1] << " " << v2[n - 2] << endl;
                        break;
                    }
                    else if (v2[n - 2] == v[i])
                    {
                        cout << v2[n - 2] << " " << v2[n - 1] << endl;
                        break;
                    }
                }
            }
        }
    }

    return 0;
}