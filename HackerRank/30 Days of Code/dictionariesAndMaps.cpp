#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    map<string, long long> m;

    for (int i = 0; i < t; i++)
    {
        string s;
        long long ll;
        cin >> s >> ll;
        m[s] = ll;
    }

    string ss;
    while (cin >> ss)
    {
        auto it = m.find(ss);
        if (it != m.end())
        {
            cout << ss << "=" << it->second << endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
    }

    return 0;
}
