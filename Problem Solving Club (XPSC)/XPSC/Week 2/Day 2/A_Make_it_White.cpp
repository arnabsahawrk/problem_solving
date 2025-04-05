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

        string str;
        cin >> str;

        int firstB = str.find('B'), lastB = str.rfind('B');

        cout << lastB - firstB + 1 << '\n';
    }

    return 0;
}