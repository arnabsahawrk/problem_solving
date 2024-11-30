#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = a;
        a = b;
        b = temp % b;
    }

    return a;
}

long long lcm(long long gcd, long long a, long long b)
{
    return (a * b) / gcd;
}

int main()
{
    long long a, b;
    cin >> a >> b;

    long long gcdResult = gcd(a, b);
    long long lcmResult = lcm(gcdResult, a, b);

    cout << gcdResult << " " << lcmResult << endl;

    return 0;
}