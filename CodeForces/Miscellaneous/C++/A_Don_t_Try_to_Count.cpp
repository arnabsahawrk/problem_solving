#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        if (x == s || x.find(s) != string::npos)
            cout << 0 << endl;
        else
        {
            int count = 0;
            bool isFound = false;
            for (int i = 0; i < 5; i++)
            {
                x.append(x);
                count++;

                if (x.find(s) != string::npos)
                {
                    isFound = true;
                    break;
                }
            }

            if (isFound)
                cout << count << endl;
            else
                cout << -1 << endl;
        }
    }

    return 0;
}