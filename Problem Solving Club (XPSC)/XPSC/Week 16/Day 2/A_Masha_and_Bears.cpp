#include <bits\stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (d > 2 * c || c > 2 * d || d >= b)
        cout << -1 << endl;
    else
        cout << 2 * a << endl
             << 2 * b << endl
             << max(c, d);
}