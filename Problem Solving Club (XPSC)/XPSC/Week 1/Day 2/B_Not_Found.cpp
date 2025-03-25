#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    int freq[26] = {0};

    cin >> str;

    for (int i = 0; i < str.size(); i++)
        freq[str[i] - 'a']++;

    for (int i = 0; i < 26; i++)
    {
        if (!freq[i])
        {
            cout << char(97 + i);
            return 0;
        }
    }

    cout << "None";

    return 0;
}