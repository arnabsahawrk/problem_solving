#include <bits/stdc++.h>
using namespace std;

void lastTwoDigit(long long m, int i)
{
    if (i == 0)
        return;

    int result = m % 10;
    lastTwoDigit(m / 10, i - 1);
    cout << result;
}

int main()
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long long multiplication = 1;
    multiplication = (multiplication * A) % 100;
    multiplication = (multiplication * B) % 100;
    multiplication = (multiplication * C) % 100;
    multiplication = (multiplication * D) % 100;

    if (multiplication < 10)
    {
        cout << "0" << multiplication << endl;
    }
    else
    {
        cout << multiplication << endl;
    }

    return 0;
}
