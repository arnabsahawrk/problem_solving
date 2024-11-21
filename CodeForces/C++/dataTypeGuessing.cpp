#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, k, a, r, test;
    cin >> n >> k >> a;

    long long x = (n * k) / a;
    r = (n * k) / a;
    test = r - x;

    if (test > 0)
        cout << "double";

    else if (x > 2147483647)
        cout << "long long";

    else
        cout << "int";

    return 0;
}
