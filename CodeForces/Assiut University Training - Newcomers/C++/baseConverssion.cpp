#include <bits/stdc++.h>
using namespace std;

void baseConverssion(int n)
{
    if (n == 0)
        return;

    baseConverssion(n / 2);
    cout << n % 2;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n == 0)
            cout << 0 << endl;
        else
        {
            baseConverssion(n);
            cout << endl;
        }
    }

    return 0;
}