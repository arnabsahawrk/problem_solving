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
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

int main()
{
    fast_io;

    int tc;
    cin >> tc;

    while (tc--)
    {
        string p, s;
        cin >> p >> s;

        if (p == s)
            cout << "YES" << endl;
        else if (p.size() == s.size() && p != s)
            cout << "NO" << endl;
        else
        {
            vi v, v2;

            for (int i = 0; i < p.size(); i++)
            {
                char c = p[i];
                string lr = "";

                while (i < p.size())
                {
                    if (p[i] == c)
                        lr += c;
                    else
                        break;

                    i++;
                }

                v.pb(lr.size());
            }

            for (int i = 0; i < s.size(); i++)
            {
                char c = p[i];
                string lr = "";

                while (i < s.size())
                {
                    if (p[i] == c)
                        lr += c;
                    else
                        break;

                    i++;
                }

                v2.pb(lr.size());
            }

            if (v.size() != v2.size())
            {
                cout << "NO" << endl;
            }
            else
            {
                bool flag = true;
                rep(i, 0, v.size())
                {
                    if (v[i] == v2[i])
                        continue;
                    else if (v[i] < v2[i])
                    {
                        if (v2[i] & 1)
                        {
                            if ((v2[i] / 2) + 1 <= v[i])
                                continue;
                            else
                            {
                                flag = false;
                                break;
                            }
                        }
                        else
                        {
                            if ((v2[i] / 2) <= v[i])
                                continue;
                            else
                            {
                                flag = false;
                                break;
                            }
                        }
                    }
                    else
                    {
                        if (v[i] & 1)
                        {
                            if ((v[i] / 2) + 1 <= v2[i])
                                continue;
                            else
                            {
                                flag = false;
                                break;
                            }
                        }
                        else
                        {
                            if ((v[i] / 2) <= v[i])
                                continue;
                            else
                            {
                                flag = false;
                                break;
                            }
                        }
                    }
                }

                if (flag)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }

    return 0;
}