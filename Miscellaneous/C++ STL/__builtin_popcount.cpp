#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 7;  // binary -> //111
    int num2 = 6; // 110

    int cnt = __builtin_popcount(num);   // 3 -> int counts the how many 1 in binary
    int cnt2 = __builtin_popcount(num2); // 2

    cout << cnt << endl;
    cout << cnt2 << endl;

    long long num3 = 165786578687;
    int cnt3 = __builtin_popcountll(num3);

    cout << cnt3 << endl;

    return 0;
}