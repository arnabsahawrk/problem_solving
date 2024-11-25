#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int j = 0; j < n; j++)
        cin >> b[j];

    sort(a, a + n);
    sort(b, b + n);

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            cout << "no";
            return 0;
        }
    }

    cout << "yes";
    return 0;
}