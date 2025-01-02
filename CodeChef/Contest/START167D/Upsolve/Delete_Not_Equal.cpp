#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (*min_element(s.begin(), s.end()) == *max_element(s.begin(), s.end()))
        {
            cout << n << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}
