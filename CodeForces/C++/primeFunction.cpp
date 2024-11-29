#include <bits/stdc++.h>
using namespace std;

void primeFunction()
{
    int numb;
    cin >> numb;

    if (numb < 2)
    {
        cout << "NO" << endl;
        return;
    }

    for (int i = 2; i * i <= numb; i++)
    {
        if (numb % i == 0)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        primeFunction();
    }

    return 0;
}