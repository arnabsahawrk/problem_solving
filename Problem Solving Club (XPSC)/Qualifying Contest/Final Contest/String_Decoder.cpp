#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string str, ans = "";
        cin >> str;

        for (int i = 0; i < str.size(); i += 2)
        {
            int k = str[i + 1] - '0';
            if (k != 0)
                for (int j = 0; j < k; j++)
                    ans += str[i];
        }

        cout << ans << endl;
    }

    return 0;
}