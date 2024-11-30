#include <bits/stdc++.h>
using namespace std;

long long sumEven(long long x)
{
    long long countEven = x / 2;
    return countEven * (countEven + 1);
}

long long sumOdd(long long x)
{
    long long countOdd = (x + 1) / 2;
    return countOdd * countOdd;
}

int main()
{
    long long a, b;
    cin >> a >> b;

    if (a > b)
        swap(a, b);

    long long totalSum = (b * (b + 1)) / 2 - ((a - 1) * a) / 2;

    long long evenSum = sumEven(b) - sumEven(a - 1);

    long long oddSum = sumOdd(b) - sumOdd(a - 1);

    cout << totalSum << endl;
    cout << evenSum << endl;
    cout << oddSum << endl;
    return 0;
}