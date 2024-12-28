#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mpp; //{key, value} pair, where key is unique also in sorted order
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;

    mpp[1] = 2;         //{{1, 2}}
    mpp.emplace(3, 1);  //{{1, 2}, {3, 1}}
    mpp.insert({2, 4}); //{{1, 2}, {2, 4}, {3, 1}}

    mpp3[{2, 3}] = 10; //{{2, 3}, 10}

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << endl;

    cout << mpp[1] << endl; // 2
    cout << mpp[5] << endl; // does not exist so, 0 or null

    auto it = mpp.find(3);

    auto it = mpp.find(5); // if not found it returns -> mpp.end() iterator

    auto it = mpp.lower_bound(2);

    auto it = mpp.upper_bound(3);

    // erase, swap, size, empty, are same as above

    // Time Complexity: O(logN)

    return 0;
}