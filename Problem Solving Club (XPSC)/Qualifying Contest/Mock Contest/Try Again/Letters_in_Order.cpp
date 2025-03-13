#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<char> st;

    char s;
    while (cin >> s)
        st.insert(s);

    for (auto c : st)
        cout << c;

    return 0;
}