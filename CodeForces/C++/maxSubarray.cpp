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

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int max = INT_MIN;
                for (int k = i; k <= j; k++)
                {
                    if (array[k] > max)
                        max = array[k];
                }
                cout << max << " ";
            }
        }
        cout << endl;
    }

    return 0;
}