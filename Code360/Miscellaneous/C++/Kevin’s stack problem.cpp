#include <bits/stdc++.h>
using namespace std;
string kevinStackProblem(string &s)
{
    stack<char> st;

    for (char c : s)
        st.push(c);

    s = "";
    while (!st.empty())
    {
        s += st.top();
        st.pop();
    }

    return s;
}