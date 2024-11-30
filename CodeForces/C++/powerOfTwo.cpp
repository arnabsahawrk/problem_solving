#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    while (n)
    {
        if (n % 2 == 0 || n == 1)
            n /= 2;
        else
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}