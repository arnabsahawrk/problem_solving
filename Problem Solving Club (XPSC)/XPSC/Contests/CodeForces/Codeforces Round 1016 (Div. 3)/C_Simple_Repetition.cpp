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
        ll x;
        int k;
        cin >> x >> k;

        if ((x == 1 && (k == 1 || k > 2)) || x != 1 && k != 1)
            cout << "NO" << endl;
        else
        {
            bool is_prime = true;

            for (int i = 2; i * i <= x; i++)
            {
                if (x % i == 0)
                {
                    is_prime = false;
                    break;
                }
            }

            if (is_prime)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}