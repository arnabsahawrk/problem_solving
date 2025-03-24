#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (n <= 9)
        cout << "000" << n << endl;
    else if (n <= 99)
        cout << "00" << n << endl;
    else if (n <= 999)
        cout << '0' << n << endl;
    else
        cout << n << endl;

    return 0;
}