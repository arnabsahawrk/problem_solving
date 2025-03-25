#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    while (n--)
    {
        int value;
        cin >> value;

        if (value != x)
            cout << value << " ";
    }

    return 0;
}