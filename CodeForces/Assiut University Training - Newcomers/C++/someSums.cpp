#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, someSums = 0;
    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++)
    {
        int x = i;
        int sum = 0;

        do
        {
            sum = sum + (x % 10);
        } while (x /= 10);

        if (sum >= a && sum <= b)
            someSums += i;
    }

    cout << someSums;

    return 0;
}