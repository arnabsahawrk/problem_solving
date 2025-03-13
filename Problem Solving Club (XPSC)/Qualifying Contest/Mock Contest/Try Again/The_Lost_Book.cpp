#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];

    int x;
    cin >> x;

    auto it = find(array, array + n, x);

    if (it != array + n)
        cout << distance(array, it);
    else
        cout << -1 << endl;

    return 0;
}