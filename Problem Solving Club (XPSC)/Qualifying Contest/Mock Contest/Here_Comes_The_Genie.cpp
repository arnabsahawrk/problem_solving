#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        st.insert(c);
    }

    long long sum = 0;

    for (auto c : st)
        sum += c;

    cout << sum << endl;
    return 0;
}