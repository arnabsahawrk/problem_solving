#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
        cin >> array[i];

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int val = array[i] + 1;
        auto ptr = find(array, array + n, val);

        int idx = ptr - array;

        if (idx < n)
            count++;
    }

    cout << count;
    return 0;
}