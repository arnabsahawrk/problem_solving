#include <bits/stdc++.h>
using namespace std;

void binarySearch(int *a, int n, int t)
{
    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (a[mid] < t)
            start = mid + 1;
        else if (a[mid] > t)
            end = mid - 1;
        else
        {
            cout << "found" << endl;
            return;
        }
    }

    cout << "not found" << endl;
}

int main()
{
    int n, q;
    cin >> n >> q;
    int array[n];

    for (int i = 0; i < n; i++)
        cin >> array[i];

    sort(array, array + n);

    while (q--)
    {
        int x;
        cin >> x;
        binarySearch(array, n, x);
    }

    return 0;
}