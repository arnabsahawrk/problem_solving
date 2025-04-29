/*   Author: Arnab Saha  Date: 04/29/2025 [19:07:59]   */
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
#define fo(i, n) for (int i = 0; i < n; ++i)
#define each(x, a) for (auto &x : a)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fst first
#define snd second

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 1e9 + 7;

void arnabsahawrk()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int singleOne = 0, doubleOne = 0, maxOne = 0, zero = 0;
    rep(i, 0, n)
    {
        char c = s[i];
        int count = 0;

        while (i < n)
        {
            if (s[i] != c)
                break;

            count++, i++;
        }

        if (c == '1')
        {
            if (count == 1)
                singleOne++;
            else if (count == 2)
                doubleOne++;
            else
                maxOne++;
        }
        else
            zero++;

        i--;
    }

    if (s[0] == '1' && s[n - 1] == '1' && zero <= 1)
        yes;
    else
    {
        if (maxOne || doubleOne >= 2 || (doubleOne == 1 && zero == 1) || (doubleOne == 1 && singleOne == 1 && zero == 2))
            yes;
        else
            no;
    }
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