#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        if (c & 1)
        {
            if (a + (c / 2) + 1 > b + (c / 2))
                cout << "First" << endl;
            else
                cout << "Second" << endl;
        }
        else
        {
            if (a + (c / 2) > b + (c / 2))
                cout << "First" << endl;
            else
                cout << "Second" << endl;
        }
    }

    return 0;
}