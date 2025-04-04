#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tuple<string, int, string> t = make_tuple("Arnab", 1, "015");

    cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << '\n';

    return 0;
}