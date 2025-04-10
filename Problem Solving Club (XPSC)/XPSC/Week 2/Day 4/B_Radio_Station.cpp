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

    int n, m;
    cin >> n >> m;

    map<string, string> mp;

    while (n--)
    {
        string str1, str2;
        cin >> str1 >> str2;

        str2 += ';';

        mp[str2] = str1;
    }

    while (m--)
    {
        string str1, str2;
        cin >> str1 >> str2;

        cout << str1 << " " << str2 << " " << '#' << mp[str2] << endl;
    }

    return 0;
}