#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, q, sum = 0;
    cin >> n >> q;
    long long array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        sum += array[i];
        array[i] = sum;
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        if (l == 0)
            cout << array[r] << endl;
        else
            cout << array[r] - array[l - 1] << endl;
    }

    return 0;
}