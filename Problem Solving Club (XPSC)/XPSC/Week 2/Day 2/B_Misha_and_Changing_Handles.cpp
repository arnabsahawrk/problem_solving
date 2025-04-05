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

    map<string, string> ans, has;

    while (n--)
    {
        string old, neW;
        cin >> old >> neW;

        if (has.find(old) != has.end())
        {
            string oldOne = has[old];
            ans[oldOne] = neW;

            has.erase(old);
            has[neW] = oldOne;
        }
        else
        {
            ans[old] = neW;
            has[neW] = old;
        }
    }

    cout << ans.size() << endl;

    for (auto mp : ans)
        cout << mp.first << " " << mp.second << endl;

    return 0;
}