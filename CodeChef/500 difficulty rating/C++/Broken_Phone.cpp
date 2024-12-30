#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        x == y ? cout << "ANY" << endl : x > y ? cout << "NEW PHONE" << endl
                                               : cout << "REPAIR" << endl;
    }
}
