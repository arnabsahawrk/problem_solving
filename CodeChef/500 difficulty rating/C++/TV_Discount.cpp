#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        a -= c;
        b -= d;

        if (a < b)
            cout << "First" << endl;
        else if (a > b)
            cout << "Second" << endl;
        else
            cout << "Any" << endl;
    }
}
