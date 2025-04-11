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

    int n;
    cin >> n;

    map<int, int> mp;
    while (n--)
    {
        int value;
        cin >> value;

        mp[value]++;
    }

    int maxV = INT_MIN;
    for (auto x : mp)
        maxV = max(maxV, x.second);

    cout << maxV << endl;

    return 0;
}