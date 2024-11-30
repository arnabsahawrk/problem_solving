#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count[26] = {0};

    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;

        count[ch - 'a']++;
    }

    for (int j = 0; j < 26; j++)
    {
        while (count[j]--)
        {
            cout << (char)('a' + j);
        }
    }

    return 0;
}