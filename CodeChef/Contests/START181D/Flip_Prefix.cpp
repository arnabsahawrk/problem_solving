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

        string br;
        cin >> br;

        char firstDigit = br[0];

        int firstCount = 0, ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (br[i] == firstDigit)
                firstCount++;
            else
                break;
        }

        ans = firstCount;

        for (int i = firstCount; i < n; i++)
        {
            if (br[i] != firstDigit && firstCount != 0)
                firstCount--;
            else
                break;
        }

        if (firstCount)
            cout << 1 << endl;
        else
            cout << ans * 2 << endl;
    }

    return 0;
}