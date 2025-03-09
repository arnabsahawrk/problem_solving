#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count = 0, three = 0;
        for (int i = 0; i < n; i++)
        {
            if (three == 3)
                break;
            else if (s[i] == '.')
                count++, three++;
            else
                three = 0;
        }

        if (three == 3)
            cout << 2 << endl;
        else
            cout << count << endl;
    }

    return 0;
}