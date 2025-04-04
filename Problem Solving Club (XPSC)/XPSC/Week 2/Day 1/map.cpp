#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> mp;
    mp[10] = 20;
    mp[20] = 10;
    mp[30] = 30;

    cout << (mp.lower_bound(20))->second << endl;
    cout << (mp.upper_bound(20))->second << endl;

    return 0;
}