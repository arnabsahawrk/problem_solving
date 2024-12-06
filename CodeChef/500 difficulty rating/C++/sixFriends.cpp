#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int doubleRooms = x * 3;
        int tripleRooms = y * 2;

        if (doubleRooms <= tripleRooms)
            cout << doubleRooms << endl;
        else
            cout << tripleRooms << endl;
    }
}
