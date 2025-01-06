#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0, value;

    while (cin >> value)
    {
        if (value >= 10)
            count++;
    }

    cout << count << endl;
}
