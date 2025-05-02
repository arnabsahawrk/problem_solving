/*   Author: Arnab Saha  Date: 05/02/2025 [21:45:13]   */
#include <bits/stdc++.h>
using namespace std;

#define fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define ll long long
#define ld long double
#define vll vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define eb emplace_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 1e9 + 7;

void arnabsahawrk()
{
    ll n;
    cin >> n;

    vll arr(n);
    rep(i, 0, n) cin >> arr[i];

    vll ch(26, 0);
    string s = "";
    rep(i, 0, n)
    {
        rep(j, 0, 26)
        {
            if (arr[i] == ch[j])
            {
                s += char(97 + j);
                ch[j]++;
                break;
            }
        }
    }

    cout << s << endl;

    /*multimap<ll, char> mp;
    int c = 97;
    rep(i, 0, 26)
    {
        mp.insert({0, char(c)});
        c++;
    }

    rep(i, 0, n)
    {
        ll x;
        cin >> x;

        auto it = mp.find(x);

        cout << it->second;

        char ch = it->second;
        mp.erase(it);
        mp.insert({x + 1, ch});
    }

    cout << endl;*/
}

int main()
{
    fast_IO;

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}