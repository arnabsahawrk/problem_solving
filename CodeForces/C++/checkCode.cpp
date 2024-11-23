#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string str;
    cin >> str;

    bool valid = true;
    if (str[a] != '-')
        valid = false;

    for (int i = 0; i < str.size(); i++)
    {
        if (i == a)
            continue;

        if (!isdigit(str[i]))
            valid = false;
    }

    if (valid)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}