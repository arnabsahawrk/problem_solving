#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, x;
    cin >> a >> b >> x;

    if (a > b)
        swap(a, b);

    long long first = ((a + x - 1) / x) * x;

    long long last = (b / x) * x;

    if (first > last)
    {
        cout << 0 << endl;
    }
    else
    {
        long long count = (last - first) / x + 1;

        long long sum = count * (first + last) / 2;

        cout << sum << endl;
    }

    return 0;
}
