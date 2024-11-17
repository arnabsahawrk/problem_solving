#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
        cin >> array[i];

    for (int i = 0, j = n - 1; i < j; i++, j--)
        swap(array[i], array[j]);

    for (int i = 0; i < n; i++)
        cout << array[i] << " ";

    return 0;
}