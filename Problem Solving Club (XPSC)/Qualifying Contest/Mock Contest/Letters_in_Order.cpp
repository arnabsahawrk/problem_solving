#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<char> str;

    char s;
    while (cin >> s)
        str.insert(s);

    for (auto c : str)
        cout << c;

    return 0;
}