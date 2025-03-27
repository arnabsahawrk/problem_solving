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
        int n, k;
        cin >> n >> k;

        string str;
        cin >> str;

        int freq[26] = {0};

        for (int i = 0; i < n; i++)
            freq[str[i] - 'a']++;

        int oddChar = 0;
        for (int i = 0; i < 26; i++)
            if (freq[i] & 1)
                oddChar++;

        if (k < oddChar - 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}