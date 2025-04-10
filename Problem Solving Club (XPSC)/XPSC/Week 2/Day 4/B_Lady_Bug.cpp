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

        string a, b;
        cin >> a >> b;

        int aOdd = 0, aEven = 0, bOdd = 0, bEven = 0;
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
            {
                if (a[i] == '1')
                    aOdd++;
                if (b[i] == '0')
                    bOdd++;
            }
            else
            {
                if (a[i] == '1')
                    aEven++;
                if (b[i] == '0')
                    bEven++;
            }
        }

        if (aOdd <= bEven && aEven <= bOdd)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}