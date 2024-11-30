#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y, count1 = 0, count2 = 1;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
        cin >> array[i];

    x = array[0];
    for (int i = 1; i < n; i++)
    {
        y = array[i];

        if (x > 0 && y > 0 || x < 0 && y < 0)
        {
            count1++;
            x = -y;
        }
        else
            x = y;
    }

    x = -array[0];
    for (int i = 1; i < n; i++)
    {
        y = array[i];

        if (x > 0 && y > 0 || x < 0 && y < 0)
        {
            count2++;
            x = -y;
        }
        else
            x = y;
    }

    cout << min(count1, count2);

    return 0;
}