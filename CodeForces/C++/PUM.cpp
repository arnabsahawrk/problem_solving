#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, pum = 1;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << pum << " ";
            pum++;
        }
        cout << "PUM" << endl;
        pum += 1;
    }
    return 0;
}