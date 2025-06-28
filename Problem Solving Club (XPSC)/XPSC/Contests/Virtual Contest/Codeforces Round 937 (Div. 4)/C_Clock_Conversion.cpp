/*   Author: Arnab Saha  Date: 06/28/2025 [21:09:11]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define checkmate return 0;

using ll = long long;
using pll = pair<ll, ll>;
using vll = vector<ll>;
using vb = vector<bool>;
using vs = vector<string>;

#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (ll)(x).size()
#define rep(i, a, b) for (ll i = (a); i < (b); ++i)
#define rrep(i, a, b) for (ll i = (a); i >= (b); --i)
#define each(x, a) for (auto &x : a)
#define rin(v) each(i, v) cin >> i
#define out(x) cout << x << endl
#define endl '\n'

const ll inf = 1e9;
const ll linf = 1e18;
const ll mod = 1e9 + 7;

void arnabsahawrk()
{
    string s;
    cin >> s;

    if (s[0] == '0' || (s[0] == '1' && (s[1] == '1' || s[1] == '0')))
    {
        if (s[0] == '0' && s[1] == '0')
        {
            s[0] = '1';
            s[1] = '2';
        }

        cout << s << " " << "AM" << endl;
    }
    else
    {

        if (s[0] == '2' && s[1] == '0')
            s[0] = '0', s[1] = '8';
        else if (s[0] == '2' && s[1] == '1')
            s[0] = '0', s[1] = '9';
        else if (s[0] == '2' && s[1] == '2')
            s[0] = '1', s[1] = '0';
        else if (s[0] == '2' && s[1] == '3')
            s[0] = '1', s[1] = '1';
        else if (s[1] == '3')
            s[0] = '0', s[1] = '1';
        else if (s[1] == '4')
            s[0] = '0', s[1] = '2';
        else if (s[1] == '5')
            s[0] = '0', s[1] = '3';
        else if (s[1] == '6')
            s[0] = '0', s[1] = '4';
        else if (s[1] == '7')
            s[0] = '0', s[1] = '5';
        else if (s[1] == '8')
            s[0] = '0', s[1] = '6';
        else if (s[1] == '9')
            s[0] = '0', s[1] = '7';

        cout << s << " " << "PM" << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    checkmate;
}