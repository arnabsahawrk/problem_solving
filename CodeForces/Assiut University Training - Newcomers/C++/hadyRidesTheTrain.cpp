#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long seatNumber, row, col;
    cin >> seatNumber;

    row = seatNumber / 4;

    if (row & 1)
        col = 3 - (seatNumber % 4);
    else
        col = seatNumber % 4;

    cout << row << " " << col;
    return 0;
}