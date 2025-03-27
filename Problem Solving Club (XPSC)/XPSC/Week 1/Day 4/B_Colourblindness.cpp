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
        int n;
        cin >> n;

        string str1, str2;
        cin >> str1 >> str2;

        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if ((str1[i] == 'R' && str2[i] != 'R') || (str1[i] != 'R' && str2[i] == 'R'))
            {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}