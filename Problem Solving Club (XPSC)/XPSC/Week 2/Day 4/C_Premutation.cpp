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

        int arr[n][n - 1];
        int freq[n + 1] = {0};

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n - 1; j++)
                cin >> arr[i][j];

        int firstDigit = 0;
        for (int x = 0; x < n; x++)
        {
            freq[arr[x][0]]++;

            if (freq[arr[x][0]] == 2)
            {
                firstDigit = arr[x][0];
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i][0] != firstDigit)
            {
                cout << firstDigit << " ";
                for (int j = 0; j < n - 1; j++)
                {
                    cout << arr[i][j] << " ";
                }

                cout << endl;
                break;
            }
        }
    }

    return 0;
}