#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    char last = '\0';
    int maxSubsequence = 0;

    for (char ch : str)
    {
        if (ch != last)
        {
            maxSubsequence++;
            last = ch;
        }
    }

    cout << maxSubsequence << endl;
    return 0;
}