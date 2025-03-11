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

        if (n % 3 != 0)
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }

    return 0;
}