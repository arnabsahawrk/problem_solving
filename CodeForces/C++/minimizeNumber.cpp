#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
        cin >> array[i];

    bool stop = false;
    while (true)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[j] & 1)
            {
                stop = true;
                break;
            }
            else
                array[j] = array[j] / 2;
        }

        if (stop)
            break;
        else
            count++;
    }

    cout << count << endl;

    return 0;
}