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

        if (n < 4)
            cout << "MILD" << endl;
        else if (n >= 4 && n < 7)
            cout << "MEDIUM" << endl;
        else
            cout << "HOT" << endl;
    }
}
