#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int array[n];

        for (int i = 0; i < n; i++)
            cin >> array[i];

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                bool nonDecreasing = true;
                for (int k = i; k <= j; k++)
                {
                    if (k != i && array[k - 1] > array[k])
                    {
                        nonDecreasing = false;
                        break;
                    }
                }
                if (nonDecreasing)
                    count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}