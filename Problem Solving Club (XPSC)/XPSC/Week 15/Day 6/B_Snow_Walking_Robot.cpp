#include <bits/stdc++.h>

using namespace std;

const string MOVES = "LRUD";

int main()
{

    int q;
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        string s;
        cin >> s;
        map<char, int> cnt;
        for (auto c : MOVES)
            cnt[c] = 0;
        for (auto c : s)
            ++cnt[c];
        int v = min(cnt['U'], cnt['D']);
        int h = min(cnt['L'], cnt['R']);
        if (min(v, h) == 0)
        {
            if (v == 0)
            {
                h = min(h, 1);
                cout << 2 * h << endl
                     << string(h, 'L') + string(h, 'R') << endl;
            }
            else
            {
                v = min(v, 1);
                cout << 2 * v << endl
                     << string(v, 'U') + string(v, 'D') << endl;
            }
        }
        else
        {
            string res;
            res += string(h, 'L');
            res += string(v, 'U');
            res += string(h, 'R');
            res += string(v, 'D');
            cout << res.size() << endl
                 << res << endl;
        }
    }

    return 0;
}