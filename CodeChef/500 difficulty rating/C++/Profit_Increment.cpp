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

        int buyingPrice = x - y;
        int sellingPrice = (x / 10) + x;

        cout << sellingPrice - buyingPrice << endl;
    }
}