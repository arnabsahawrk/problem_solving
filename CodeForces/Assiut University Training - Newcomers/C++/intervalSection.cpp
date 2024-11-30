#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (max(a, c) <= min(b, d))
        cout << max(a, c) << " " << min(b, d) << endl;
    else
        cout << "-1";

    return 0;
}