#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        if (x > 6)
        {
            cout << "GOLD" << endl;
        }
        else if (x > 3 && x <= 6)
        {
            cout << "SILVER" << endl;
        }
        else
        {
            cout << "BRONZE" << endl;
        }
    }

    return 0;
}