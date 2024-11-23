#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long seatNumber, row, col;
    cin >> seatNumber;

    if (seatNumber & 1)
    {
        row = seatNumber / 4;
        col = 3 - (seatNumber % 4);
    }
    else
    {
        row = seatNumber / 4;
        col = seatNumber % 4;
    }

    cout << row << " " << col;
    return 0;
}