#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms; // sorted
    ms.insert(1);     // {1}
    ms.insert(1);     // {1, 1}
    ms.insert(1);     //{1, 1, 1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    // only a single one erased (first one)
    ms.erase(ms.find(1));

    // rest all function same as set

    return 0;
}