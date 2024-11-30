#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int arrA[a], arrB[b];

    for (int i = 0; i < a; i++)
        cin >> arrA[i];

    for (int j = 0; j < b; j++)
        cin >> arrB[j];

    if (a < b)
        cout << "NO";
    else
    {
        for (int i = 0, j = 0; i < a; i++)
        {
            if (arrA[i] == arrB[j])
                j++;

            if (j == b)
            {
                cout << "YES";
                return 0;
            }
        }
        cout << "NO";
    }
    return 0;
}