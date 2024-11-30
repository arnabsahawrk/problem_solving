#include <bits/stdc++.h>
using namespace std;

long long equation(int x, int n)
{
    long long rslt = 0;
    long long power = 1;

    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
            rslt += power - 1;
        else if (i % 2 == 0)
            rslt += power;

        power *= x;
    }

    return rslt;
}

int main()
{
    int x, n;
    cin >> x >> n;

    long long result = equation(x, n);

    cout << result;
    return 0;
}