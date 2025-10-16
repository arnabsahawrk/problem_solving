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

        vi arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int minV = *min_element(arr.begin(), arr.end());
        int maxV = *max_element(arr.begin(), arr.end());

        if (minV < 0)
            cout << minV << " " << minV << endl;
        else if (maxV > 0)
            cout << maxV << " " << maxV << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}