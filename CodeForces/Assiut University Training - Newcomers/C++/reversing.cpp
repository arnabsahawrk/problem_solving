#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
        cin >> array[i];

    for (int i = 0; i < n; i++)
    {
        if (array[i] == 0 && i != 0)
            reverse(array, array + i);
    }

    for (int a : array)
        cout << a << " ";
    return 0;
}