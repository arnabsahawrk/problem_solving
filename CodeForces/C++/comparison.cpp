#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    string smallest = str;

    for (int i = 1; i < str.size(); i++)
    {
        string x = str.substr(0, i);
        string y = str.substr(i);

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        string concatenate = x + y;

        if (concatenate < smallest)
            smallest = concatenate;
    }

    cout << smallest;
    return 0;
}