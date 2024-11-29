#include <bits/stdc++.h>
using namespace std;

void NTimes()
{
    int n;
    char c;
    cin >> n >> c;

    while (n--)
        cout << c << " ";

    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        NTimes();

    return 0;
}