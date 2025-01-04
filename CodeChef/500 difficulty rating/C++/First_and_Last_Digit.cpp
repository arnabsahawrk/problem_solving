#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int lastDigit = n % 10;

        int sum = 0;
        while (n)
        {
            sum = lastDigit + (n % 10);

            n /= 10;
        }
        cout << sum << endl;
    }
}
