#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int array[n];

    for (int i = 0; i < n; i++)
        cin >> array[i];

    sort(array, array + n, greater<int>());

    long long sum = 0;
    for (int i = 0; i < k; i++)
    {
        if (array[i] < 0)
            sum += 0;
        else
            sum += array[i];
    }

    cout << sum;

    return 0;
}